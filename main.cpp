#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

#include "Date.h"
#include "Devoir.h"
#include "Organisateur.h"
#include "GroupeDevoir.h"

using namespace std;

int main()
{
	Organisateur Organiseur;
	bool tableauVide=false;
	unsigned int choix;
	string arret;
	GroupeDevoir DevoirPlusieurs("mds", "energetique", Date(01, 12, 2023), Date(10, 12, 2023), 2, "noncommence", { "Bastien","Irene","Theo","Emma" }); //pas réussi à implémenter la fonction qui permet de rentrer plusieurs personnes donc voici un devoir avec plusieures personnes
	Organiseur.AjoutDevoir(DevoirPlusieurs);

	do
	{
		cout << "Si vous desirez ajouter un devoir taper 1\n Pour changer le staut taper 2\n Pour changer le temps taper 3\n Pour afficher la liste des travaux taper 4\n Taper 0 pour sortir" << endl;
		cin >> choix;

		if (choix == 1)
		{
			int jD = 0, mD = 0, aD = 0;
			int jF = 0, mF = 0, aF = 0;
			float tempsTravail = 0;
			string matiere, intitule, statut = "nonCommence";

			cout << "Veuillez rentrer la date de debut du devoir en format JJ MM AAAA\n";
			cin >> jD >> mD >> aD;
			cout << "Veuillez rentrer la date de fin du devoir en format JJ MM AAAA\n";
			cin >> jF >> mF >> aF;
			Date dateTempD(jD, mD, aD);
			Date datetempF(jF, mF, aF);
			cout << "\n\nVeuillez rentrer la matiere, l'intitule et le temps de travail estime (en heures) : \n";
			cin >> matiere >> intitule >> tempsTravail;
			GroupeDevoir devoirTemp(matiere, intitule, dateTempD, datetempF, tempsTravail, statut);
			Organiseur.AjoutDevoir(devoirTemp);
			system("cls");
		}
		if (choix == 2)
		{
			string tempStatut;
			string tempIntitule;
			cout << "Veuillez rentrer l'intitule et le nouveau statut du devoir : ";
			cin >> tempIntitule >> tempStatut;
			Organiseur.changerStatut(tempIntitule, tempStatut);
			system("cls");
		}
		if (choix == 3)
		{
			float tempTemps = 0;
			string tempIntitule;
			cout << "Veuillez rentrer l'intitule et le temps à y consacrer : ";
			cin >> tempIntitule >> tempTemps;
			Organiseur.changerTemps(tempIntitule, tempTemps);
			system("cls");
		}
		if (choix == 4)
		{
			Organiseur.afficher_devoir();
			system("pause");
			system("cls");

		}
	} while (choix != 0);
	
	if (choix == 0)
	{
		return 0;
	}
}