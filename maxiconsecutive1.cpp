//**************OPTIMAL******************//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < n; i++)

    {
        cin >> arr[i];
    }
    int count = 0;
    int maxi = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    cout << "maximum consecutive 1's are " << maxi << endl;

    return 0;
}