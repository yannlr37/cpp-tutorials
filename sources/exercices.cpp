#include <iostream>
#include <vector>
#include <cmath>
#include "exercices.h"

void laverie()
{
	/*
		ENONCE : 

		Nous allons faire un programme d’aide dans une laverie automatique. Dans celle-ci, deux
		types de machines sont employées: des machines économes capables de laver 5kg de linge au
		maximum et d’autres, plus gourmandes, capables de laver 10kg.
			— Si le linge fait moins de 5 kg, il faut le mettre dans une machine de 5kg.
			— S’il fait entre 5kg et 10kg, il faut le mettre dans une machine de 10kg.
			— Enfin, s’il fait plus, il faut répartir le linge entre machines de 10kg et, dès qu’il reste 5kg
			  ou moins, mettre le linge restant dans une machine 5kg.
	 */

	int qte_linge {0};
	std::cout << "Veuillez entrer votre quantité de linge : ";

	if (!(std::cin >> qte_linge)) {
		std::cout << "La quantité demandée n'est pas un nombre" << std::endl;
		return;
	}
	
	int nb_5kg {0};
	int nb_10kg {0};
	int remain = qte_linge;
	int weight {5};

	if (qte_linge > 5) {
		weight = 10;
	}

	while (remain > 0) {
		remain -= weight;
		(weight == 10) ? nb_10kg++ : nb_5kg++;
		weight = (remain < 10)? 5 : 10;
	}

	std::cout << "Veuillez prendre " << nb_10kg << " machine(s) de 10kg et " << nb_5kg << " machine(s) de 5 kg" << std::endl;
}

void pgcd()
{
	/*
	Le PGCD de deux nombres est un entier qui est le plus grand diviseur que ces deux nombres ont en commun. 
	Ainsi, le PGCD de 427 et 84 est 7, car 427 = 7 × 61 et 84 = 7 × 12. 
	Pour le calculer, voici l’algorithme.
		— On stocke le modulo du premier nombre, appelé a , par l’autre nombre, appelé b , dans
		une variable r .
		— Tant que r est différent de zéro, on effectue les opérations suivantes.
		— On affecte la valeur de b à a .
		— On affecte la valeur de r à b .
		— On affecte à r le résultat du modulo de a par b .
		— Quand r est nul, alors b représente le PGCD des deux nombres donnés en entrée.
	*/
	int a {0};
	int b {0};

	do {
		std::cout << "Veuillez choisir le nombre 1 (entier positif) : ";
		if (!(std::cin >> a)) {
			std::cin.clear();
			std::cin.ignore(255, '\n');
			std::cout << std::endl;
		}
	} while (a == 0);

	do {
		std::cout << "Veuillez choisir le nombre 2 (entier positif) : ";
		if (!(std::cin >> b)) {
			std::cin.clear();
			std::cin.ignore(255, '\n');
			std::cout << std::endl;
		}
	} while (b == 0);

	std::cout << "Vous avez choisi (" << a << "," << b << ")" << std::endl;

	int a_prime = a;
	int b_prime = b;
	int r = a % b;

	while (r != 0) {
		a_prime = b_prime;
		b_prime = r;
		r = a_prime % b_prime;
	}

	std::cout << "Le PGCD de " << a << " et " << b << " est " << b_prime << std::endl;

}
