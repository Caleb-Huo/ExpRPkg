##' Square Function
##'
##' This function is designed to square a function, but this function will Call C
##' @title Square a number
##' @param x number to be squared
##' @return squared number
##' @author Caleb
##' @export
##' @examples
##' squareC(2)
squareC <- function(x){
    o = .C("squareRC",
	G = as.double(x),
	res = as.double(0)
      )
    return(o$res)
}
