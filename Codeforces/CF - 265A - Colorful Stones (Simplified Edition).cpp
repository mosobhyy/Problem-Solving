#include <iostream>

using namespace std;

int main()
{
    string input, instructions;
    int steps=1, iterate=0;
    cin >> input >> instructions;
    for (int i=0 ; i<instructions.size(); i++)
    {
        if (input[iterate]==instructions[i])
        {
            steps++;
            iterate++;
        }
    }
    cout << steps;
    return 0;
}

