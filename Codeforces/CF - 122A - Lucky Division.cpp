#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;;
    if (num%7==0 || num%4==0 || num%74==0 || num%47==0 || num%477==0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
