#pragma once
#include "Devoir.h"
class GroupeDevoir : public Devoir ///Héritage
{
private :
	vector<string> tabNoms;
public:
	GroupeDevoir();
	GroupeDevoir(string m, string i, Date D, Date F, float tp, string st, vector<string>NP = { "Seul" }) : Devoir(m, i, D, F, tp, st), tabNoms(NP) {};
	void afficher(); ///Masquage
	friend class Organisteur;

};

