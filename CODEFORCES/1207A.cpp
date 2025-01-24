#include <iostream>

using namespace std;

int hamBurger (int *bun, int *pattie)
{
    int quantity = 0;

    while(*bun > 1 && *pattie > 0)
    {
        *bun -= 2;
        (*pattie)--;
        quantity++;
    }
    return quantity;
}

int chickenBurger (int *bun, int *cutlet)
{
    int quantity = 0;

    while(*bun > 1 && *cutlet > 0)
    {
        *bun -= 2;
        (*cutlet)--;
        quantity++;
    }
    return quantity;
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int bun;
        int pattie;
        int cutlet;

        int hamBurger_Price;
        int chickenBurger_Price;

        int hamBurger_Quantity;
        int chickenBurger_Quantity;

        cin >> bun >> pattie >> cutlet;
        cin >> hamBurger_Price >> chickenBurger_Price;

        if(hamBurger_Price > chickenBurger_Price)
        {
            hamBurger_Quantity = hamBurger (&bun, &pattie);
            chickenBurger_Quantity = chickenBurger (&bun, &cutlet);
        }
        else
        {
            chickenBurger_Quantity = chickenBurger (&bun, &cutlet);
            hamBurger_Quantity = hamBurger (&bun, &pattie);
        }

        cout << hamBurger_Quantity*hamBurger_Price + chickenBurger_Quantity*chickenBurger_Price << endl;
    }

    return 0;
}