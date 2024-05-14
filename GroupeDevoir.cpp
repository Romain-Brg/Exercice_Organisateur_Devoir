#include "GroupeDevoir.h"

GroupeDevoir::GroupeDevoir()
{
	tabNoms.push_back("Jean");
	tabNoms.push_back("Pierre");
	tabNoms.push_back("Andre");
	tabNoms.push_back("Claude");
}

void GroupeDevoir::afficher()
{
	Devoir::afficher(); ///Masquage
	for (unsigned int i = 0; i < tabNoms.size(); i++)
	{
		cout << tabNoms[i]<<",";
	}
	cout << "\n";
}
