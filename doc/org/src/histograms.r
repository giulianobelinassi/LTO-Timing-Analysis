library(ggplot2)
library(dplyr)
library(GGally)

df = read.csv("csv/corei7_long.csv")

log_df = df %>%
    select(-Repetition, -Filename) %>%
    mutate(log_Expected_insns = log(Expected_insns),
           log_Functions = log(Functions),
           log_CompileTime = log(CompileTime)) %>%
    select(log_Expected_insns,
           log_Functions,
           log_CompileTime,
           Parallel)

ggpairs(log_df)
