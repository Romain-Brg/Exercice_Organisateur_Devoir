#pragma once
#include "Devoir.h"
#include "GroupeDevoir.h"
class Organisateur
{
private :
	vector<GroupeDevoir> TabDevoir;
	vector<GroupeDevoir>::iterator it; ///It�rateur 
	int nbdevoir;
public:
	Organisateur();
	void AjoutDevoir(GroupeDevoir Travail);
	bool TableauVide();//pas utile
	void afficher_devoir();
	void changerStatut(string nomDevoir,string newStatut);
	void changerTemps(string nomDevoir, float newTemps);




};

