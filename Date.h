#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Date
{
private :
	int jour;
	int mois;
	int annee;
public:
	Date();
	Date(int j, int m, int a);
	friend class Devoir;
	friend ostream& operator<<(ostream& os, const Date& date);

};

