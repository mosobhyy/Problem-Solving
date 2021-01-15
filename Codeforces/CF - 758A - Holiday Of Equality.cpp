#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num, total=0, max=0;
    cin >> num;
    vector<int> v(num);
    for(int i=0 ; i<num ; i++)
    {
        cin >> v[i];
        if(v[i] > max)
            max = v[i];

    }
    for(int i=0 ; i<num ; i++)
    {
        total+= max - v[i];
    }
    cout << total;
    return 0;
}

