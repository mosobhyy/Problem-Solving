#include <iostream>

using namespace std;

int main()
{
    int n, b, d, sum = 0, result=0;
    cin >> n >> b >> d;
    for (size_t i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (input <= b)
            sum += input;
        if(sum>d)
        {
            result++;
            sum = 0;
        }
    }
    cout << result;
}
