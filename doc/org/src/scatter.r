library(ggplot2)
library(dplyr)
library(tidyr)

plot_df = df %>%
    pivot_longer(cols = c("Expected_insns", "Functions"),
                 names_to = "Parameter",
                 values_to = "Value")

ggplot(plot_df) +
    facet_grid(Parameter ~ Parallel, scales = "free_x") +
    geom_point(aes(x = Value,
                   y = CompileTime,
                   color = Parallel),
               alpha = 0.4) +
    scale_x_log10() +
    scale_y_log10() +
    scale_color_brewer(palette = "Dark2")
