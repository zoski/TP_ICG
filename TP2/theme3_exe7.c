/*
La suite de Fibonacci est une suite d'entiers dans laquelle chaque terme est la
somme des deux termes qui le précèdent. Elle commence généralement par les
termes 0 et 1 (parfois 1 et 1) et ses premiers termes sont : 1, 1, 2, 3, 5, 8, 13, 21,
etc.
Construire un programme qui calcul d’une façon non récursive puis récursivement
le nième terme de la suite de Fibonacci.

*/


#include <stdio.h>

int fibo(int n) {
	int c;
	int a,b,f;
	a=0;b=0;f=0;
 	for ( c = 0 ; c < n ; c++ )  {
    	if ( c <= 1 ) f = c;
        
    	else {
			f = a + b;
			a = b;
			b = f;
      	}
	}
}


int fiborecur(int n)
{
   if ( n == 0 ) return 0;
   else if ( n == 1 ) return 1;
   else return ( fiborecur(n-1) + fiborecur(n-2) );
} 



int main() {
	printf("%i\n", fibo(8));
	printf("%i\n", fiborecur(8));
	return 0;
}
