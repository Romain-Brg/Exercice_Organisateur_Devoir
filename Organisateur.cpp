#include "Organisateur.h"

Organisateur::Organisateur()
{
	nbdevoir = 0;
}

void Organisateur::AjoutDevoir(GroupeDevoir Travail)
{
	TabDevoir.push_back(Travail);
	nbdevoir++;
}

bool Organisateur::TableauVide()
{
	if (nbdevoir == 0)
		return true;
	return false;
}

void Organisateur::afficher_devoir()
{
	for (it = TabDevoir.begin();it != TabDevoir.end(); it++)
	{
		it->afficher();
	}
}

void Organisateur::changerStatut(string nomDevoir,string newStatut)
{
	bool statutChange = false;

	for (unsigned int i = 0; i < TabDevoir.size(); i++)
	{
		if (TabDevoir[i].intitule == nomDevoir)
		{
			TabDevoir[i].statut = newStatut;
			cout<<"Statut du devoir change"<<endl;
			statutChange = true;
		}
	}
	if (statutChange == false)
		cout << "Le devoir recherche n'existe pas, veuillez entrer un intitule valide" << endl;
}

void Organisateur::changerTemps(string nomDevoir, float newTemps)
{
	bool statutChange = false;

	for (unsigned int i = 0; i < TabDevoir.size(); i++)
	{
		if (TabDevoir[i].intitule == nomDevoir)
		{
			TabDevoir[i].temps = newTemps;
			cout << "Temps de travail du devoir change" << endl;
			statutChange = true;
		}
	}
	if (statutChange == false)
		cout << "Le devoir recherche n'existe pas, veuillez entrer un intitule valide" << endl;

}
