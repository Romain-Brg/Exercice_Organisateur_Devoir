#include "Devoir.h"

Devoir::Devoir()
{
	matiere = "null";
	intitule = "null";
	temps = 0;
	statut = "null";
	Debut.annee = 0;
	Debut.mois = 0;
	Debut.jour = 0;
	Fin.jour = 0;
	Fin.mois = 0;
	Fin.annee = 0;
}

Devoir::Devoir(string matiere, string intitule, Date debut, Date fin, float temps, string statut)
{
	this->matiere = matiere;
	this->intitule = intitule;
	Debut = debut;
	Fin = fin;
	this->temps = temps;
	this->statut = statut;
}

void Devoir::afficher()
{
	cout << "| " << matiere << " | " << intitule << " | Date debut : " << Debut << " | Date fin : " << Fin << " | " << temps << " | " << statut << " |"<<endl;

}
