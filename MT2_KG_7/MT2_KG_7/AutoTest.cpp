#include<iostream>
#include<string>
#include "Auto.h"
using namespace std;


int main()
{
	// Objekt erstellen Standard
	Auto k_auto1 = Auto();

	// allgemein

	Auto k_auto2 = Auto(4, "rot");

	//kopier
	Auto kop_auto = Auto(k_auto1);



}


