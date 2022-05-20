#include <iostream>
#include <string>
#include <cstring>
#include "Transportmittel.h"
using namespace std;

int main()
{
	//Test Basisklasse
	Transportmittel TM_1(1.8, 2.4);
	TM_1.bewegen("Osten");
	
	cout << "Das ist die Breite des Transportmittels: " << TM_1.get_breite() << endl;

	







}