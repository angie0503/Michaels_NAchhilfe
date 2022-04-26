#include<iostream>
#include<string>
#include "Auto.h"
using namespace std;

float Auto::fahren(float strecke)
{
	cin >> tankinhalt;
	cin >> spritverbrauch;

	strecke = tankinhalt - (spritverbrauch / 100.f);

	cout << strecke << "km";


}
//Standardkonstruktor
Auto::Auto()
{
	radzahl = 4;

}

// allgemeiner Kosntruktor
Auto::Auto(int Radzahl, string Farbe)
{
radzahl = Radzahl;

}

// Kopierkonstruktor
Auto::Auto((const Auto& other)
{
radzahl = other.radzahl;
}

//Destruktor
Auto::~Auto()
{

}

int Auto::getradzahl()
{
	return radzahl; 
}