#include <iostream>
#include <stdio.h>
#include <exception>
#include <cstring>
#include <ctype.h>
#include <bits/stdc++.h>
#include "Itemtype.cpp"
using namespace std;
int main()
{
    string name;
    double deposit;
    double costPerday;

    Itemtype it;

    cout << "Enter the itemtype name: " << endl;
    getline(cin, name);
    it.setName(name);

    cout << "Enter item deposit:" << endl;
    cin >> deposit;
    it.setDeposit(deposit);

    try
    {

        if (deposit = int(deposit))

        {
            cout << "Enter item cost per day: " << endl;
            cin >> costPerday;
            it.setCostPerday(costPerday);
            if (costPerday = int(costPerday))
            {

                it.display();
            }

            else
                throw 1;
        }

        else

            throw 1;
    }
    catch (int)
    {

        cout << "NumberFormatException: "
             << "Price should always be numeric " << endl;
    }

    return 0;
}
