#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n, d, m, y, c, previousD = 0, previousM = 0, previousY = 0, previousC = 0, consecutive;
    unsigned long long sum;
    while (cin >> n && n != 0)
    {
        sum = consecutive = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> d >> m >> y >> c;
            if (d == 1 && m == 1 && y - previousY == 1 && previousD == 31 && previousM == 12)
            {
                sum += abs(c - previousC);
                consecutive++;
            }
            else if (y == previousY)
            {
                if (y % 4 != 0)
                    months[2] = 28;
                else if (y % 100 != 0)
                    months[2] = 29;
                else if (y % 400 != 0)
                    months[2] = 28;
                else
                    months[2] = 29;
                if (m == previousM)
                {
                    if (d - previousD == 1)
                    {
                        sum += abs(c - previousC);
                        consecutive++;
                    }
                }
                else if (previousM == 1 || m % previousM == 1)
                {
                    if (d == 1 && previousD == months[previousM])
                    {
                        sum += abs(c - previousC);
                        consecutive++;
                    }
                }
            }
            previousD = d;
            previousM = m;
            previousY = y;
            previousC = c;
        }
        cout << consecutive << " " << sum << endl;
    }
    return 0;
}