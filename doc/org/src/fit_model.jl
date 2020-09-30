using GLM, StatsModels, DataFrames, DataFramesMeta, Random, Statistics

df = CSV.read("csv/corei7_long.csv")

train_ratio = 0.1
train_size = round(Int, 0.2 * nrow(df))
train_rows = shuffle(1:nrow(df))[1:train_size]
df_train = df[train_rows, :]

test_rows = [x for x in 1:nrow(df) if !(x in train_rows)]
df_test = df[test_rows, :]

mse(y1, y2) = mean((y1 - y2) .^ 2)

regression_full = lm(@formula(CompileTime ~ ((Expected_insns + Expected_insns ^ 2) +
                                            (Functions + Functions ^ 2) +
                                            (Inlined_percentage + Inlined_percentage ^ 2) +
                                            (Num_partitions + Num_partitions ^ 2)) *
                                            (Parallel + Parallel ^ 2)),
                     df_train)

mse_full = mse(df_test[:, :CompileTime],
               predict(regression_full, select(df_test, Not(:CompileTime))))
