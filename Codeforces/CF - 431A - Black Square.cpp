#include <iostream>

using namespace std;

int main()
{
    int colories[4], total = 0;
    string choice;
    for (int i=0 ; i<4 ; i++)
        cin >> colories[i];
    cin >> choice;
    for (int i=0 ; i < choice.size() ; i++)
    {
        if (choice[i] == '1')
            total += colories[0];
        else if (choice[i] == '2')
            total += colories[1];
        else if (choice[i] == '3')
        total += colories[2];
        else if (choice[i] == '4')
            total += colories[3];

    }
    cout << total;
    return 0;
}

