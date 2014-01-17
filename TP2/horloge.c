#include "horloge.h"
#include <stdio.h>

void print_heure() {
	printf("Il est : %i heure(s) %i minute(s)) %i seconde(s)\n", heures, minutes, secondes);
}

void set_heure(int h, int m, int s) {
	heures = h;
	minutes = m;
	secondes = s;
}

void tick() {
	secondes=secondes+1;
	if(secondes==60) {
		secondes=0;
		minutes=minutes+1;
	}
	if(minutes==60) {
		minutes=0;
		heures=heures+1;
	}
	if(heures==24) {
		heures=0;
	}
}
