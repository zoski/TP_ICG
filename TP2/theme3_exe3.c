/*
Ecrire une fonction qui calcul et affiche l’air d’un rectangle sachant qu’elle prend
en paramètre la largeur et la hauteur. Faites l’affichage dans le main et ensuite dans
la fonction.
*/

#include <stdio.h>

float air(float lon, float larg) {
	printf("\nLe rectangle de longeur = %f et de largeur %f à une aire de %f\n.", lon, larg, lon*larg);
	return lon*larg;
}

int main() {
	float a = air(10, 13.5);
}
