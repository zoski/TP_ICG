/* Ecrire un programme qui trie de manière croissante un tableau de 5 entiers.
*/

#include <stdio.h>

void affiche(int *tab, int taille) {
	int i=0;
	for(i=0 ; i<taille ; i++) {
		printf("%i\n", tab[i]);	
	}
}

int main() {
	int n = 5, tmp = 0, i = 0, j=0;
	int tab[n];
	//Remplissage
	for(i=0 ; i<n ; i++) {
		printf("\nRentrez l'élement n° %i : \t", i+1);
		scanf("%i", &tab[i]);
	}
	
	printf("\nLe tableau à trié est :\n");
	affiche(tab, 5);

	//tri
	for(i=0; i<4 ; i++){
		for(j=i; j<5 ; j++){
			if(tab[j]<tab[i]) {
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j]=tmp;
			}
		}
		j++;
	}
	printf("Le tableau trié est :\n");
	affiche(tab, 5);
	// 3 5 1

	return 0;
}
