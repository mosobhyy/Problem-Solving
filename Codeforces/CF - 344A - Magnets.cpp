#include <iostream>

using namespace std;

int main()
{
    int lim, counter = 1;
    cin >> lim;
    int num[lim];
    for (int i = 0 ; i < lim ; i++){
        cin >> num[i];
        if (lim == 1){
            break;
        }else if (i > 0)
            if (num[i] != num[i-1])
                counter ++;
    }
    cout << counter;
    return 0;
}

