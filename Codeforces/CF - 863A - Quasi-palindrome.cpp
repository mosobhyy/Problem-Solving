#include <iostream>

using namespace std;

int main()
{
    int num, temp, size=0;
    cin >> num;
    while(num%10==0)
        num /= 10;
    temp = num;
    while(temp!=0)
    {
        temp /= 10;
        size++;
    }
    int arr[size];
    int ptr = size-1;
    for (int i=0 ; i<size ; i++)
    {
        arr[i] = num%10;
        num /= 10;
    }
    for (int i=0 ; i<size/2 ; i++,ptr--)
    {
        if (arr[i] != arr[ptr])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}

