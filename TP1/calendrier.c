#include <stdio.h>

// calcule du modulo
int modulo(int jour, int base) {
	return jour%base ;
}

/* Affiche les jours de la semaine */
void semaine() {
	printf("lu\tma\tme\tje\tve\tsa\tdi\n");
}

/* Insère une tabulation pour faire correspondre le premier jour du mois avec le bon jour de la semaine */
decalage(int p) {
	int i;
	for(i = 0 ; i<p ; i++) {
		printf("\t");
	}
}

/* Affiche un mois complet, p est le premier jour du mois
 		n est le nombre de jour du mois
 			ex : p=1 -> lundi	n = 28 pour fevrier	*/
void mois(int p, int n) { 
	int jour = 1 ;
	semaine();
	decalage(p); 	
	for (jour =1 ; jour <=n ; jour ++) {
		/* Gestion du décalage pour l'affichage à droite */
		if(jour<10) printf(" ");
		
		printf("%i\t", jour);
		/* Gestion du retour à la ligne */
		if (modulo(jour+p, 7) == 0) printf("\n");
	}
	printf("\n");
}


/*calcule le nombre de jours dans le mois donné*/
int nbr_jour_mois(int nm, int annee) {
	/*	avant juin */
	if(nm <=7) {	
		/*Février*/
		if(nm==2 && annee%4==0) return 29;	//année bissextile
		if(nm==2) return 28;			
		/*Mois pairs*/
		if(nm != 2 && nm%2 == 0) return 30;
		else return 31;
	}
	else {		//Après juin
		if(nm != 2 && nm%2 != 0) return 30;
		else return 31;
	}
}

/* Calcule le nombre de jours dans l'année donnée */
int nbr_jour_annee(int annee) {
	int m, tot ;
	tot = 0;
	for(m = 1 ; m<=12 ; m++) {
		tot = tot + nbr_jour_mois(m, annee);
	}
	return tot;
}

/* Calcule le nombre de jours de décalage au début de l'année donnée*/
int nbr_jour_decal(int annee) {
	int decal2000 = 6 ;	//nbr de jours de decalage pour l'année 2000
	int a = annee ;
	 
}


void main() {
	printf("%i",nbr_jour_annee(1990));
}


