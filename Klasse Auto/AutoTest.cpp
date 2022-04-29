#include<iostream>
#include<string>
#include "Auto.h"
using namespace std;


int main()
{

	//Standard Objekt erstellen auf Stack
	Auto Auto1_Test = Auto();

	//Kopierobjekt erstellen auf Heap
	Auto* Kop_Auto3_Test = new Auto(Auto2_Test);

	// Allgemeines Objekt erstellen auf Datensegment 
	static Auto Auto2_Test = Auto(4, "rot", 70, 5, 6, 40, 70);

	cout << "Test Auto 1" << endl;
	cout << "Radzahl" << 
	cout << "Test Auto 2" << endl;

	cout << "Test Auto 3" << endl;

	cout << "Test Destruktor" << endl;
}


