/*Ecrire un programme en langage C qui lit une ligne de texte (ne dépassant pas 200 caractères) la mémorise dans une variable TXT et affiche ensuite:
	a) la longueur L de la chaîne en utilisant la fonction strlen, puis en créeant une fonction LongueurChaine.
	b) le nombre de 'e' contenus dans le texte.
*/

#include <stdio.h>
#include <string.h>

int main() {
	char txt[200];
	int i =0, j=0;
	
	printf("Rentrez la ligne de texte à analyser.\n");
	gets(txt);
	int taille = strlen(txt);
	printf("La ligne fait %i caractères.\n", taille);
	
	for(i=0; i<taille; i++) {
		if(txt[i]=='e') j++;
	}
	printf("La ligne comprends %i fois la lettre 'e'.\n", j);
}
