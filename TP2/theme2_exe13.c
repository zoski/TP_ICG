/*
On se propose d'afficher des étoiles dans les dispositions suivantes :
***** 	* 	***** ***** *
***** 	** 		*** **** **
***** 	***
*****	****	 *** ***
***** 	***** ** ** ****


*/

#include <stdio.h>

void colone() {
	int i = 0;
	for(i=0 ; i<5 ; i++) {
		printf("*****\n");
	}
}

void printligne(int i) {
	int j=0;
	for(j=0 ; j<i ; j++) {
		printf("*");
	}
}

void printespace(int i) {
	int j=0;
	for(j=0 ; j<i ; j++) {
		printf(" ");
	}
}
void triangl0() {
	int i;
	for(i=0 ; i<=5 ; i++) {
		printligne(i);		
		printf("\n");
	}
}

void triangl1() {
	int i;
	for(i=0 ; i<=5 ; i++) {
		printespace(i);
		printligne(5-i);		
		printf("\n");
	}
}

void triangl2() {
	int i;
	for(i=5 ; i>0; i--) {
		printligne(i);		
		printf("\n");
	}
}	

void triangl3() {
	int i;
	for(i=0 ; i<=5 ; i++) {
		printespace(5-i);
		printligne(i);		
		printf("\n");
	}
}	



int main() {
	triangl0();
	triangl1();
	triangl2();
	triangl3();

}
