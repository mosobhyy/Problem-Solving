#include <iostream>

using namespace std;

int main()
{
    int numOfCards, Sereja = 0, Dima = 0, start = 0 , end, value;
    cin >> numOfCards;
    int card[numOfCards];
    for (int i = 0 ; i < numOfCards ; i++)
    {
        cin >> card[i];
    }
    end = numOfCards - 1;
    for (int i = 0 ; i < numOfCards ; i++)
    {
        if (card[start] > card[end]){
            value = card[start];
            start++;
        }
        else{
            value = card[end];
            end--;
        }
        if (i % 2 == 0)
            Sereja += value;
        else
            Dima += value;
    }
    cout << Sereja << " " << Dima;
    return 0;
}

