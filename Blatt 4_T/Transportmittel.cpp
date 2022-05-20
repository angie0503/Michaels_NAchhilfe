#include <iostream>
#include <string>
#include <cstring>
#include "Transportmittel.h"
using namespace std;

// allgeminer Konstruktor Transportmittel

//Methoden
void Transportmittel::bewegen(string richtung)
{
	string x = richtung;
	cin >> x;

	if (x == "Norden")
	{
		cout << "in Richtung" << x << "bewegen" << endl;
	}
	else if (x == "Sueden")
	{
		cout << "in Richtung" << x << "bewegen" << endl;
	}
	else if (x == "Osten")
	{
		cout << "in Richtung" << x << "bewegen" << endl;
	}
	else if (x == "Westen")
	{
		cout << "in Richtung" << x << "bewegen" << endl;
	}
}


void LandTransportmittel::fahren(double km)
{

}

void LandTransportmittel::schieben(double km)
{

}

void WasserTransportmittel::anlegen(string anlegehafen)
{

}

void WasserTransportmittel::ablegen(string ablegehafen)
{

}

void Fahrrad::freihaendigfahren(string name)
{

}

void Fahrrad::schieben(double km)
{

}

void Rischka::ziehen(int anzahlpersonen)
{

}

void Auto::tanken(int liter)
{

}