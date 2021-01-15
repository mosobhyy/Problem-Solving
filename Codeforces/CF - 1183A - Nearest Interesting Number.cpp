#include <iostream>

using namespace std;

int main() {
    int num, temp, sum=6;
    cin >> num;
    temp = num;
    while(sum%4 != 0)
    {
        sum = 0;
        temp = num;
        while(temp>0)
        {
            sum += (temp%10);
            temp /= 10;
        }
        temp = num;
        num++;
    }
    cout << temp;
    return 0;
}

