/*Écrire une fonction supprime_espace qui supprime les espaces d'une chaîne de caractères. Cette fonction ne doit pas utiliser de tableau intermédiaire.
*/

#include <stdio.h>
#include <string.h>

char *supprime_espace(char *chaine) {
	int i = 0,j =0, n=strlen(chaine);
	for(i=0;i<n;i++) {
		if(chaine[i]==' ')
			j++;
			chaine[i]=chaine[i+j];
	}
	return (char*)chaine;
}

int main() {
	char chaine[200];
	printf("Rentrez la ligne de texte dont vous voulez supprimer les espaces.\n");
	gets(chaine);

	//supprime_espace

	int i = 0,j =0, n=strlen(chaine);
		for(i,j=0;i<n;i++, j++) {
			if(chaine[i]==' ')
				i++;
				chaine[j]=chaine[i];
				
		}

	
	printf("\n");
	puts(chaine);
	

	return 0;
}
