#include <iostream>

using namespace std;

int main()
{
    int result = 0;
    int arr[5][5];
    for (int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            if (arr[i][j] == 1){
                while (i < 2){
                    arr[i+1][j] = arr[i][j];
                    arr[i][j]= 0;
                    result ++;
                    i++;
                }
                while (i > 2){
                    arr[i-1][j] = arr[i][i];
                    arr[i][j]= 0;
                    result ++;
                    i--;
                }
                while (j < 2){
                    arr[i][j+1] = arr[i][i];
                    arr[i][j]= 0;
                    result ++;
                    j++;
                }
                while (j > 2){
                    arr[i][j-1] = arr[i][i];
                    arr[i][j]= 0;
                    result ++;
                    j--;
                }
            }
        }
    }
    cout << result;
    return 0;
}
