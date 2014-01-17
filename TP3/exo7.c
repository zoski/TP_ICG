/* Ecrire une fonction qui échange les valeurs de deux variables réelles données en
argument puis les affichent sans et avec l’utilisation des pointeurs. C’est quoi la
différence entre les deux méthodes.
*/

#include <stdio.h>

void echange(int *a, int *b) {
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

int main() {
	int a = 3, b= 7;
	printf("\n%i %i, on échange...\n", a, b);
	echange(&a, &b);
	printf("\nRésultat : %i, %i.\n\n", a, b);

}
