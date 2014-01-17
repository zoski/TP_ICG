/*Ecrire un programme en langage C qui lit la dimension N d'un tableau T du type
int (dimension maximale: 50 composantes), remplit le tableau par des valeurs
entrées au clavier et affiche le tableau. Trouver et afficher le maximum du tableau
et sa position.
Copiez ensuite toutes les composantes strictement positives dans un deuxième
tableau TPOS et toutes les valeurs strictement négatives dans un troisième tableau
TNEG. Afficher les tableaux TPOS et TNEG.*/

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

int max(int *tab, int n) {
	int i=0, m=0;
	for(i=0 ; i<n ; i++) {
		if(tab[i]>m) {
			m = tab[i];
		}
	}
	return m;
}

int main() {
	int i=0, j=0, k=0;
	int n = dimension();
	int tab[n], tpos[n], tneg[n];
	//Remplissage
	for(i=0 ; i<n ; i++) {
		printf("\nRentrez l'élement n° %i : \t", i+1);
		scanf("%i", &tab[i]);
	}

	printf("\nLe tableau rentré est :");
	affiche(tab, n);

	printf("\nL'élément le plus grand du tableau est : %i\n", max(tab, n));

	for(i=0 ; i<n ; i++) {
		if(tab[i]>0) {
			tpos[j]=tab[i];
			j++;
		}
		if(tab[i]<=0) {
			tneg[k]=tab[i];
			k++;
		}
	}


	//affiche bis
	printf("\nTableau TPOS\n");
	affiche(tpos, j);
	
	printf("\nTableau TNEG\n");
	affiche(tneg, k);


	return 0;
}
