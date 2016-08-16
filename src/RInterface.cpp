#include "RMat.h"

#include <iostream>
#include <Rmath.h>

using namespace std;


void square(double *G, double *Result){
	*Result = *G * *G;
}

extern "C" {
	void squareRC(double *G, double *Result){
		square(G, Result);
	}
}



