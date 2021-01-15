#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numOfStudents, index1 = 0, index2 = 0, index3 = 0, numOfTeams;
    cin >> numOfStudents;
    int team[3][numOfStudents];
    for (int i = 0; i < numOfStudents; i++)
    {
        int gift;
        cin >> gift;
        if (gift == 1)
        {
            team[0][index1] = i+1;
            index1++;
        }
        else if (gift == 2)
        {
            team[1][index2] = i+1;
            index2++;
        }
        else
        {
            team[2][index3] = i+1;
            index3++;
        }
    }
    if (index1 < index2)
    {
        if (index1 < index3)
            numOfTeams =  index1;
        else
            numOfTeams = index3;
    }
    else
    {
        if(index2<index3)
            numOfTeams = index2;
        else
            numOfTeams = index3;
    }
    cout << numOfTeams << endl;
    for(int i=0 ; i<numOfTeams ; i++)
    {
        cout << team[0][i] << " ";
        cout << team[1][i] << " ";
        cout << team[2][i];
        cout << endl;
    }
        return 0;
}
