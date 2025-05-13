#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include <cmath>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

long long amount;

int rand_num()
{
    return rand() % 10 + 1;
}

int main()
{
    cout << "----Enter Deposit Amount to play game: $";
    cin >> amount;
    while (true)
    {
        long long betting_amount;
        if (amount == 0)
        {
            cout << " Sorry you lost all your money. Insufficent amount to play" << endl;
            return 0;
        }

        cout << "Enter the betting amount" << endl;
        cin >> betting_amount;
        if (betting_amount > amount)
        {
            cout << "Insufficent amout" << endl;
            continue;
        }
        cout << "guess 1: ";
        int n;
        cin >> n;
        if (n > 10 || n <= 0)
        {
            cout << "Wrong number, try again " << endl;
            continue;
        }
        else
        {
            int r = rand_num();
            if (r == n)
            {
                amount += betting_amount * 10;
                cout << "Winner. \n Your Balance is " << amount << endl;
            }
            else
            {
                amount -= betting_amount;
                cout << "Loser. \n Your Balance is " << amount << endl;
            }
        }
    }
    return 0;
}
