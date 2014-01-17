/*
Ecrire une fonction qui calcule le maximum de deux entiers en utilisant les
pointeurs
*/

#include <stdio.h>

int max(int *a, int *b) {
	if(*a<*b) return *b;
	else return *a;
}

int main() {
	int a = 2, b=3; 
	printf("Le plus grand est %i\n", max(&a,&b));
	return 0;
}
