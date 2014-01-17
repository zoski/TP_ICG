/*
Le statisticien et sociologue belge Quételet a observé au milieu du XIXième siècle,
que le rapport (I) du poids en kilogrammes (P) par la taille en mètres (T) au carré
était constant chez des individus de constitution moyenne. En 1998, l'Organisation
Mondiale de la Santé a établi une classification suivant ce rapport I=P/T² :
maigreur pour I<18.5
limite moyenne pour 18.5 ... 24.9
surpoids pour I>25

Construisez une procédure qui demande à l'utilisateur son poids en kilogrammes et
sa taille en mètres, calcul l'indice I et affiche sa condition par rapport à la
classification de l'OMS
*/

#include <stdio.h>

int main() {
	float taille, indice, poids =0;
	
	printf("\nQuel est vôtre poids ?\t");
	scanf("%f", &poids);
	printf("\nVous faite %f kg. Quel est votre taille ?\t", poids);
	scanf("%f", &taille);
	printf("\nVous faite  %f mètres", taille);
	
	indice = poids/(taille*taille);
	printf("\nVotre indice est de %f", indice);
	if(indice < 18.5) {
		printf("\n\nVous étes maigres\n");
	}
	if(indice >= 18.5 && indice <= 24.9 ) {
		printf("\n\nVous étes dans la moyenne\n");
	}
	if(indice > 25 ) {
		printf("\n\nVous étes en surpoids, dommage.\n");
	}
	return 0;
}
