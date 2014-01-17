/*
Les tarifs d'une piscine sont les suivants :
	trois euros si vous avez entre 18 et 65 ans;
	deux euros si vous avez plus de 65 ans;
	un euros si vous avez moins de 18 ans.
	
	De plus, vous pouvez bénéficier d'une réduction de 
	20% si vous avez une carte de réduction.
	
	Construire une procédure principale qui prend en entrée l'âge du client et un entier
	indiquant s'il a une carte (0 pour non et 1 pour oui), et qui renvoie la somme à
payer. 
*/

#include <stdio.h>

float apayer(int age, int carte) {
	float tarif = 0;
	if(age<18) {
		tarif = 1.0;
		if(carte==1) tarif= tarif - (tarif*0.2);
	}
	
	if(age>18 && age<65) {
		tarif =3.0;
		if(carte==1) tarif=tarif - (tarif*0.2);
	}
	
	if(age>65) {
		tarif = 2.0;
		if(carte==1) tarif= tarif - (tarif*0.2);
	}
	return tarif;
}

int main() {
	float euro;
	euro=apayer(68, 1);
	printf("%f\n",euro);
	
	return 0;
}
