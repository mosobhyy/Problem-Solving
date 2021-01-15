#include <iostream>

using namespace std;

int main()
{
    int num, Anton=0, Danik=0;
    string str;
    cin >> num;
    cin >> str;
    for (int i=0;i<num;i++){
        if (str[i] == 'A')
            Anton += 1;
        else
            Danik += 1;
    }
    if (Anton > Danik)
        cout << "Anton" << endl;
    else if (Anton < Danik)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}

