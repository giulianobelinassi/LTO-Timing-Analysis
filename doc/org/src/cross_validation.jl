using GLM, CSV, StatsModels, DataFrames, DataFramesMeta, Random, Statistics

mse(y1, y2) = mean((y1 - y2) .^ 2)

df = CSV.read("csv/corei7_long.csv")

iterations = 100

cross_validation = DataFrame(MSE = [],
                             R2 = [],
                             PredictedParallel = [],
                             RealCompileTime = [],
                             PredictedCompileTime = [])

for i = 1:iterations
    println(i)
    train_ratio = 0.1
    train_size = round(Int, train_ratio * nrow(df))
    train_rows = shuffle(1:nrow(df))[1:train_size]
    df_train = df[train_rows, :]

    test_rows = [x for x in 1:nrow(df) if !(x in train_rows)]
    df_test = df[test_rows, :]

    regression = lm(@formula(CompileTime ~ ((Expected_insns +
                                             Expected_insns ^ 2) +
                                            (Functions +
                                             Functions ^ 2) +
                                            (Inlined_percentage +
                                             Inlined_percentage ^ 2) +
                                            (Num_partitions +
                                             Num_partitions ^ 2)) *
                             (Parallel + Parallel ^ 2)), df_train)

    prediction = predict(regression, select(df_test, Not(:CompileTime)))

    best_prediction = df_test[findmin(prediction)[2], :]

    push!(cross_validation, (MSE = mse(df_test[:, :CompileTime], prediction),
                             R2 = adjr2(regression),
                             PredictedCompileTime = findmin(prediction)[1],
                             RealCompileTime = best_prediction[:CompileTime],
                             PredictedParallel = best_prediction[:Parallel]))

end

CSV.write("csv/cross_validation.csv", cross_validation)

cv_df = CSV.read("csv/cross_validation.csv")
cv_df

println(mean(cv_df.MSE))
println((1.96 * std(cv_df.MSE)) / sqrt(length(cv_df.MSE)))

println(mean(cv_df.R2))
println((1.96 * std(cv_df.R2)) / sqrt(length(cv_df.R2)))
