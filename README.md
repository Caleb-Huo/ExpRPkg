# ExpRPkg
A simple package to perform square function.
This function also calls C++.
The package serves as a simplest example for making R package calling C++.

## Required package
None
* To install all the required packages, open R console
```R
install.packages(c("devtools"))

library(devtools)
install_github("xiaoguang1988/ExpRPkg")
```

## How to use this package
* in R,
```R
library(ExpRPkg)
square(4)
squareC(4)
```

