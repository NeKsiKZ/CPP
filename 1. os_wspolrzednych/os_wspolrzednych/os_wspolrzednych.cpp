#include <iostream>
#include "friend.h"

using namespace std;

void judge(Punkt &pkt, Prostokat &p)
{
	if ((pkt.x >= p.x) && (pkt.x <= p.x + p.width) && (pkt.y >= p.y) && (pkt.y <= p.y + p.hight))
		cout << endl << "Punkt " << pkt.nazwa << " nalezy do prosokata: " << p.nazwa;
	else 
		cout << endl << "Punkt " << pkt.nazwa << " nie nalezy do prosokata: " << p.nazwa;
}

int main()
{
	Punkt pkt1("A", 3, 20);
	pkt1.wczytaj();

	Prostokat p1("Prostokat", 0, 0, 6, 4);
	p1.wczytaj();

	judge(pkt1, p1);

	return 0;
}