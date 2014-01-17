/*Saisir et ensuite afficher la chaine de caractère « ENSISA » (avec et sans les fonctions de string.h)
*/

#include <stdio.h>
#include <string.h>

int main() {
	//avec string.h
	char c[7];
	//saisie
	printf("Rentrez une chaine de char qui vous tiens à coeur :\t");
	gets(c);
	
	//affichage
	printf("\nVous avez rentré : ");
	puts(c);
	
/*
	//Sans string.h
	char c[7];
	//saisie
	printf("Rentrez une chaine de char qui vous tiens à coeur :\t");
	scanf("%s", c);
	
	//affichage
	printf("Vous avez rentré : %s\n",c);
*/
	

	return 0;
}



