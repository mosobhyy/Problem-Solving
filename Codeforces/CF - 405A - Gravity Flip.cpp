#include <iostream>

using namespace std;

int main()
{
    int col, temp = 0;
    cin >> col;
    int arr[col];
    for (int i = 0 ; i < col ; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0 ; i < col  ; i++)
    {
        for (int j = i + 1 ; j < col  ; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0 ; i < col ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

