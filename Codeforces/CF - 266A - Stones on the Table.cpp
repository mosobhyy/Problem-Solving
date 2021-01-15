#include <iostream>

using namespace std;

int main()
{
    int num, counter = 0;
    cin >> num;
    char color[num];
    for (int i = 0 ; i < num ; i++)
    {
        cin >> color[i];
    }
    for (int i = 0 ; i < num ; i++)
    {
        if (color[i] == color[i+1]){
            counter++;
        }
    }
    cout << counter;
    return 0;
}

