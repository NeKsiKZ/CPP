#include <iostream>

using namespace std;

class Prostokat;

class Punkt
{
	string nazwa;
	float x, y;

public:
	Punkt(string = "A", float = 0, float = 0);
	void wczytaj();

	friend void judge(Punkt &pkt, Prostokat &p);
};

class Prostokat
{
	string nazwa;
	float x, y, width, hight;

public:
	Prostokat(string = "brak", float=0, float=0, float=1, float=1);
	void wczytaj();
	
	friend void judge(Punkt &pkt, Prostokat &p);
};