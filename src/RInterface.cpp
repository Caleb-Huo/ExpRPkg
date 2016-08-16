#include "RMat.h"
using std;

void square(double *G, double *Result){
	*Result = *G * *G;
}

extern "C" {
	void squareRC(double *G, double *Result){
		square(G, Result);
	}
}



