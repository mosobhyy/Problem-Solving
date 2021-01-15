#include <iostream>

using namespace std;

int main()
{
    int num_of_friends, fence_height, friends_height, result=0;
    cin >> num_of_friends >> fence_height;
    for (int i=0;i<num_of_friends;i++){
        cin >> friends_height;
        if (friends_height > fence_height)
            result += 2 ;
        else
            result ++;
    }
    cout << result;
    return 0;
}

