#include <iostream>

using namespace std;

class Data
{
    int day, month, year;

public:
    Data(int d = 31, int m = 1, int y = 2000)
    {
        day = d;
        month = m;
        year = y;
    }
    int check()
    {
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            if (month == 2)
            {
                if (day > 0)
            }















            if (month == 2 && day > 0 && day <= 29)
            {
                cout << "Zgodny miesiac i dzien1" << endl;
            }
            else if (month == 2 && day <= 0 || day > 29)
            {
                cout << "Data error" << endl; 
            }
            else if ((month % 2 == 0) && (month > 0) && (month <= 12) && (day > 0) && (day <= 31))
            {
                cout << "Zgodny miesiac i dzien2" << endl;
            }
            else if ((month % 2 == 1) && (month > 0) && (month <= 12))
            {
                if (day > 0 && day <= 30)
                {
                    cout << "Zgodny miesiac i dzien3" << endl;  
                }
                else 
                    cout << "Data error33" << endl;
            }

        }
        else
        {
            cout << "nie przestepny" << endl;
        }

        return 0;
    }
};

int main()
{
    Data d1;
    d1.check();
    return 0;
}