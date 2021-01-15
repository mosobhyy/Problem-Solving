#include <iostream>

using namespace std;

int main()
{
    int sum = 0, result = 0;
    string name;
    cin >> name;
    for (int i = 0 ; i < name.size() ; i++)
    {
        for (int j = i + 1 ; j < name.size() ; j++)
        {
            if (name[i] == name [j]){
                sum ++;
                break;
            }
        }
    }
    result = name.size() - sum;
    if (result % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}

