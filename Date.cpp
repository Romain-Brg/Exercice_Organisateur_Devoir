#include "Date.h"

Date::Date()
{
	jour = 0;
	mois = 0;
	annee = 0;
}

Date::Date(int j, int m, int a) : jour(j) ,mois(m),annee(a){}

ostream& operator<<(ostream& os, const Date& date)
{
	os << date.jour << "/" << date.mois << "/" << date.annee;
	return os;
}