#pragma once
#include "Date.h"
class Devoir
{
private:

	string matiere;
	string intitule;
	Date Debut;
	Date Fin;
	float temps;
	string statut;
public :
	Devoir();
	Devoir(string matiere, string intitule, Date debut, Date fin, float temps, string statut);
	friend class Organisateur;
	virtual void afficher(); ///polymorphisme
};

