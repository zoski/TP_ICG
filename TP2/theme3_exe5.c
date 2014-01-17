/*
Écrire un programme comportant :
	1. la déclaration de 3 variables globales entières heures, minutes, secondes ;
	2. une fonction print_heure sans argument qui imprimera le message :
		Il est ... heure(s) ... minute(s) ... seconde(s)
	3. une fonction set_heure recevant comme arguments trois paramètres de type
		entiers h, m et s, dont les valeurs seront affectées respectivement à heures,
		minutes et secondes;
	4. une fonction tick qui incrémentera l’heure de une seconde;
	5. une fonction main qui appellera les fonctions print_heure, set_heure et tick.
		Vous commencerez par mettre toutes ces fonctions dans un même fichier. 
		Vous les placerez ensuite chacune dans des fichiers différents. 
		Les variables globales seront placées dans la fonction main.
*/

#include <stdio.h>
#include "horloge.h"

int heures, minutes, secondes;
int main() {
	
	set_heure(4,4,4);
	while(1) {
		print_heure();
		tick();
	}
	return 0;
}
