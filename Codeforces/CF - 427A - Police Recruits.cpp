#include <iostream>

using namespace std;

int main()
{
    int num, hire, counter = 0, check = 0;
    cin >> num;
    for (int i = 0 ; i < num ; i++)
    {
        cin >> hire;
        check += hire;
        if (check < 0){
            check = 0;
            counter++;
        }
    }
    cout << counter;
    return 0;
}

