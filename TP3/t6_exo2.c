/*Ecrire un programme en langage C qui lit 5 mots de 30 caractères maximum,
séparés par des espaces et qui les affiche ensuite dans une ligne, mais dans l'ordre
inverse. Les mots sont mémorisés dans 5 variables M1, ... ,M5.
Exemple : voici une petite phrase !
! phrase petite une voici
*/

#include <stdio.h>

int main() {
	char m1[30], m2[30], m3[30], m4[30], m5[30];
	printf("\nRentrez 5 mots : \t");
	scanf("%s %s %s %s %s", m1, m2, m3, m4, m5);
	printf("\n %s %s %s %s %s", m5, m4, m3, m2, m1);

	return 0;
}

