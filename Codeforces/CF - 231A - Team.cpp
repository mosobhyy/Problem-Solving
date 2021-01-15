#include <iostream>

using namespace std;

int main()
{
    int num, p, v, t, solution=0;
    cin >> num;
    for (int i=0;i<num;i++){
        cin >> p >> v >> t;
        if ((p+v+t) >= 2)
            solution ++;
    }
    cout << solution;
    return 0;
}

