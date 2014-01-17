/*Ecrire un programme en langage C qui lit la dimension N d'un tableau T du type int
(dimension maximale: 50 composantes), remplit le tableau par des valeurs entrées
au clavier et affiche le tableau.
Calculer et afficher ensuite la somme des éléments du tableau.*/

#include <stdio.h>

int dimension(){
	int n=0;
	printf("\nQuelle est la taille du tableau à créer ? (max 50)");
	scanf("%i", &n);
	return n;
}

int somme(int *tab, int taille) {
	int i=0, r=0;
	for(i=0 ; i<taille ; i++) {
		r = r+tab[i];
	}
	return r;	
}

/*void creation(int taille) {
	int tab[taille];
	int i =0;
	for (i=0 ; i<taille ; i++) {
		printf("\nRentrez l'élement n° %i : \t", i+1);
		scanf("%i", &tab[i]);
	}
	return tab;
}*/

int main() {
	int n = dimension();
	int tab[n];
	int i =0;
	for (i=0 ; i<n ; i++) {
		printf("\nRentrez l'élement n° %i : \t", i+1);
		scanf("%i", &tab[i]);
	}
	
	printf("La somme des éléments du tableau fait : %i", somme(tab, n));
	return 0;
}
