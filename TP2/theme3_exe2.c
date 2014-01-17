/*
Ecrire une fonction « punition» qui affiche le même message à l'écran autant de
fois qu'on lui demande.
void punition(int nombreDeLignes)
*/

#include <stdio.h>

void punition(int n) {
	int i =0;
	for( i=0 ; i<n ; i++) {
		printf("%i : Affiche le même message à l'écran autant de fois qu'on lui demande.\n", i);
	}
}

int main() {
	punition(15);
}
