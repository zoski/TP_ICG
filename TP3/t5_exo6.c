/*
Ecrire un programme en langage C qui lit la dimension N d'un tableau T du type int (dimension maximale: 50 composantes), remplit le tableau par des valeurs entrées au clavier et affiche le tableau.
Ranger ensuite les éléments du tableau T dans l'ordre inverse sans utiliser de tableau d'aide. Afficher le tableau résultant.
Idée: Echanger les éléments du tableau à l'aide de deux indices qui parcourent le tableau en commençant respectivement au début et à la fin du tableau et qui se rencontrent en son milieu.
*/

#include <stdio.h>

int dimension(){
	int n=0;
	printf("\nQuelle est la taille du tableau à créer ? (max 50)");
	scanf("%i", &n);
	return n;
}

void affiche(int *tab, int taille) {
	int i=0;
	for(i=0 ; i<taille ; i++) {
		printf("%i\n", tab[i]);	
	}
}

int main() {
	int taille = dimension();
	int tab[taille];
	int i=0, j=0, tmp;;
	
	//remplissage
	for(i=0 ; i<taille ; i++) {
		printf("\nRentrez l'élement n° %i : \t", i+1);
		scanf("%i", &tab[i]);
	}
	
	printf("\nLe tableau rentré est :\n");
	affiche(tab, taille);

	//inversion ex 123 -> 321
	j=taille-1;
	for(i=0;i<=j;i++) {
		tmp=tab[i];
		tab[i]=tab[j];
		tab[j]=tmp;
		j--;
	}

	printf("\nLe tableau maintenant inversé est :\n");
	affiche(tab, taille);

	return 0;
}

