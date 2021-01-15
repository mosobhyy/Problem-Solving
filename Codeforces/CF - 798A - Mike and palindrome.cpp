#include <iostream>
using namespace std;

int main() {
    int changes = 0;
    string str;
    cin >> str;
    for (int front = 0, back = str.size() - 1; front < str.size() / 2; front++, back--)
        if (str[front] != str[back])
            changes++;
    if(changes==0 && (str.size())%2==0 || changes>1)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}

