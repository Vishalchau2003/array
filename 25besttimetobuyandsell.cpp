#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mini = arr[0];
    int profit=0;
    for(i=0;i<n;i++){
        int cost=arr[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,arr[i]);

    }
    cout<<profit<<endl;
    int return 0;
}