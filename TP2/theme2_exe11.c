/* 
	On se propose de calculer le plus grand commun diviseur pgcd de deux entiers par l'algorithme d'Euclide. 
	Cet algorithme repose sur le fait que, 
		étant donné deux entiers 'a' et 'b', le pgcd de 'a' et de 'b' est égal au pgcd de 'b' et de 'r' où 'r' est le reste de la division euclidienne de 'a' par 'b' et ceci tant que 'r' est différent de zéro (pgcd(a,b) == pgcd(b,a%b)). Le pgcd est alors le dernier diviseur utilisé.
	Écrivez une procédure qui, à partir de deux entiers saisis au clavier, calcule leur
	pgcd. Pour information, en C la condition 'b' différent de zéro s'énonce b!=0
	et le reste de la division euclidienne de a par b s'obtient par l'instruction a%b
*/

#include <stdio.h>

int main() {
	int a,b,r=1,temp=1;
	
	printf("Rentrer 2 entier dont on cherche le pgcd !\n");
	scanf("%i %i", &a, &b);
	//printf("\n le reste de la div : %i\n", r);
	while(r!=0) {
		r=a%b;
		a=b;
		b=r;
		temp=a;		
	}
	printf("Le plus pgcd est : %i\n",temp);
}


