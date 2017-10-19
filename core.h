// postacie
#include <iostream>
#include <string>
//#include "core.h"
using namespace std;

class glownybohater
{
public:

    string imie;						// Imie okreslone na poczatku gry.
	int MainAtak = 2;					// Atak => Hit => Default: 2
	int MainObrona = 5;					// Obrona |		[Defaultowo 5]
	int MainSila = 1;					// Sila   |		[Defaultowo: 5]
	int MainHP = 50;					// Zdrowie|		[Defaultowo: 50 + zwiekszenie z lvlem]
	int MainZadanyDMG;					// Zliczenie zadanych obra¿eñ
	int MainZostaloHP;					// Ilosc HP jakie zostalo
	int MainPoziom = 1;					// Poziom => Na start 1lvl.

    int pozycja;
    bool sciezka_w;
    bool sciezka_s;
    bool sciezka_a;
    bool sciezka_d;
    char akcja;

    void doprzodu();

	//glownybohater();

};
