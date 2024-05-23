#include <iostream>
#include "friend.h"

using namespace std;

Punkt::Punkt(string n, float xx, float yy)
{
	nazwa = n;
	x = xx;
	y = yy;
}

void Punkt::wczytaj()
{
	cout << "Podaj x: "; cin >> x;
	cout << "Podaj y: "; cin >> y;
	cout << "Nazwa punktu: "; cin >> nazwa;
}

Prostokat::Prostokat(string n, float xx, float yy, float s, float w)
{
	nazwa = n;
	x = xx;
	y = yy;
	width = s;
	hight = w;
}

void Prostokat::wczytaj()
{
	cout << "Podaj x lewego dolnego: "; cin >> x;
	cout << "Podaj y lewego dolnego: "; cin >> y;
	cout << "Podaj szerokosci: "; cin >> width;
	cout << "Podaj wysokosc: "; cin >> hight;
	cout << "Podaj nazwe: "; cin >> nazwa;
}