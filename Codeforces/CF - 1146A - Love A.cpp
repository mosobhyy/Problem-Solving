#include <iostream>

using namespace std;

int main() {
    string s;
    int sumOfA=0, sumOfOthers, sum;
    cin >> s;
    sum = s.size();
    for(int i=0 ; i<sum ; i++)
        if(s[i]=='a')
            sumOfA++;
    sumOfOthers = sum - sumOfA;
    while(sumOfOthers>=sumOfA)
        sumOfOthers--;
    cout << sumOfA + sumOfOthers;
    return 0;
}

