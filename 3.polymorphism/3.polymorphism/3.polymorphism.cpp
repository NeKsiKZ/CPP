#include <iostream>

using namespace std;

class Ksztalt
{
public:
    virtual void oblicz_pole() = 0;

    virtual void oblicz_obwod() = 0;
};

class Kolo :public Ksztalt
{
    float r;
public:
    Kolo(float x)
    {
        r = x;
    }
    virtual void oblicz_pole()
    {
        cout << "Pole kola:" << 3.14 * r * r << endl;
    }

    virtual void oblicz_obwod()
    {
        cout << "Obwod kola: " << 2 * 3.14 * r << endl;
    }
};

class Kwadrat :public Ksztalt
{
    float a;
public:
    Kwadrat(float x)
    {
        a = x;
    }
    virtual void oblicz_pole()
    {
        cout << "Pole kwadratu: " << a * a << endl;
    }

    virtual void oblicz_obwod()
    {
        cout << "Obwod kwadratu: " << 4 * a<< endl;
    }

};

class Trojkat :public Ksztalt
{
    float a, h;
public:
    Trojkat(float x, float r)
    {
        a = x;
        h = r;
    }
    virtual void oblicz_pole()
    {
        cout << "Pole trojkata: " << (1.0 / 2.0) * a * h << endl;
    }

    virtual void oblicz_obwod()
    {
        cout << "By obliczyc obowd trojkata potrzebujemy informacji na temat wszystkich bokow lub czy jest rownoramienny." << endl;
    }

};

void obliczenia(Ksztalt* x)
{
    x->oblicz_pole();
    x->oblicz_obwod();
}

int main()
{
    Kolo k(1);
    Kwadrat kw(2);
    Trojkat tr(3, 2);

    Ksztalt* wsk;

    wsk = &k;
    wsk->oblicz_pole();
    //kolo

    wsk = &kw;
    wsk->oblicz_pole();
    //kwadrat

    wsk = &tr;
    wsk->oblicz_pole();
    //trojkat
    
    obliczenia(wsk);


    return 0;
}