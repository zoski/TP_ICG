#include <stdio.h>

/* Affiche une ligne de deb à fin multiplié par m	*/
void ligne(int deb, int fin, int m) {
	int i ;
	for(i=deb ; i<=fin ; i++) {
		/* Gestion du décalage pour coller à droite*/
		if(i*m<10) printf(" ");
		if(i==10 && i*m!=100) printf(" ");
		/* Affichage */
		printf("%i\t",i*m);
	}
	printf("\n");
}

/*	Affiche la table de mutiplication de n à m*/
void multiplication(int n, int m) {
	int i = n;
	for(i=n ; i<=m ; i++) {
		ligne(n, m, i);
	}
}

void main() {
	multiplication(1, 5);
	
}
