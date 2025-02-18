#include <bits/stdc++.h>
using namespace std;
int findmissing(int arr[], int N, int n)
{
    for (int i = 1; i, N; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] = i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
}
int main()
{
    int arr[1000], n, N;
    cout << "enter size" << endl;
    cin >> n;
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the value of N" << endl;
    cin >> N;
    findmissing(arr, N, n);
    cout << "missing element at index" << findmissing;
    return 0;
}
