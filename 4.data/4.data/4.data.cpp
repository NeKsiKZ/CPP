#include <iostream>

using namespace std;

class Data
{
    int day, month, year;

public:
    Data(int d = 30, int m = 11, int y = 2000)
    {
        day = d;
        month = m;
        year = y;
    }
    void check()
    {
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            if ((month % 2 == 0 )&&(month > 0)&&(month <= 12)&&(day > 0)&&(day <=31))
                cout << "zgodny miesiac i dzien" << endl;
            else 
                cout << "data error" << endl;

            if ((month % 2 == 1) && (month > 0) && (month <= 12))
            {
                if (month == 2 && day > 0 && day <= 29)
                {
                    cout << "zgodny miesiac i dzien" << endl;
                }
                else if ((month % 2 == 1) && (month > 0) && (month <= 12))
                {
                    if (day > 0 && day <= 30)
                    {
                        cout << "zgodny miesiac i dzien" << endl;
                    }
                }
                else 
                    cout << "data error" << endl;
            }





        }
        else
        {
            cout << "nie przestepny" << endl;
        }
    }
};

int main()
{
    Data d1;
    d1.check();
    return 0;
}