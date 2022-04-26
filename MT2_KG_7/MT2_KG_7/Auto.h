#include<iostream>
#include<string>
using namespace std; 
#pragma once

class Auto
{
private: int radzahl;
private: string farbe;
private: int ps;
private: int anzahl_sitze;
private: float spritverbrauch;
private: float tankinhalt;
private: float tankgroesse;

public: float fahren(float strecke);



 //Standardkonstruktoren
	  Auto()

//allgemeiner Konstruktor
		  Auto(int Radzahl; string Farbe;)

 //Kopierkonstruktor
		  Auto(const Auto& other);

//Destruktor
	  ~Auto();


int getradzahl();


	  //Methode
}



