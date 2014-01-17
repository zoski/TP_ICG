/*
Ecrire une fonction « conversion » qui convertit les euros en francs, sachant que 1
euro = 6,55957 francs.
double conversion (double euros)
*/
#include <stdio.h>

float convert(float euro) {
	float taux = 6.55957;
	return euro*taux;
}

int main() {
	float aconv = 10;
	printf("\n%f euros = %f francs\n",aconv, convert(aconv));

}
