#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n , k, gross, target, obstacles=0;
    cin >> n >> k;
    vector<char> v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin >> v[i];
        if(v[i] == 'G')
            gross = i;
        else if(v[i] == 'T')
            target = i;
    }

    if(target>gross)
    {
        for(int i=gross ; i<n ; i+=k)
        {
            if(v[i]=='#')
                break;
            else if(v[i]=='T')
            {
                cout << "YES";
                return 0;
            }
        }
    }

    else
    {
        for(int i=gross ; i>=0 ; i-=k)
        {
            if(v[i]=='#')
                break;
            else if(v[i]=='T')
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}

