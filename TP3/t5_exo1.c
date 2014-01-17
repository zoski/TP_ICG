/*Ecrire un programme qui crée un tableau de 5 entiers puis avec une boucle
demande la saisie de ces 5 entiers et affiche le troisième élement.
*/

#include <stdio.h>

int main() {
	int tab[5];
	int i =0;
	for (i=0 ; i<5 ; i++) {
		printf("\nRentrez l'élement n° %i : \t", i+1);
		scanf("%i", &tab[i]);
	}
	
	printf("\tLe 3eme élément rentré est : %i\n", tab[2]);
	
	return 0;
}
