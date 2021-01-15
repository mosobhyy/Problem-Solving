#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    int x, n, input, sum = 0;
    cin >> x >> n;
    for (int i = 0; i < x; i++)
    {
        cin >> input;
        vec.push_back(input);
        sum += input;
    }

    if (sum < n)
        cout << "-1";
    else
    {
        int counter = 0, min = n;
        while (counter < vec.size())
        {
            sum = 0;
            for (int i = counter; i < vec.size(); i++)
            {
                sum += vec[i];
                if (sum >= n)
                {
                    if (min > (i - counter+1))
                        min = (i - counter+1);
                    break;
                }
            }
            counter++;
        }
        cout << min;
    }
    return 0;
}

