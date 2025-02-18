//**************BRUTE *****************//
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array elements: ";
//     int maxi=INT_MIN;
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum=0;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//          int sum=0;
//          for(int k=i;k<=j;k++){
//             sum=sum+arr[k];
//          }
//          maxi=max(sum,maxi);

//         }
//     }
//     cout<<maxi;
//     return 0;

// }

//**************BETTER*****************//
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array elements: ";
//     int maxsum=INT_MIN;
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for(i=0;i<n;i++){
//      int sum=0;
//         for(j=i;j<n;j++){
//             sum=sum+arr[j];
//             maxsum=max(sum,maxsum);
//         }

//     }
//     cout<<maxsum;

//     return 0;

// }

//**************OPTIMAL*****************//
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
    int sum = 0;
    int maxsum = INT_MIN;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > maxsum)
        {
            maxsum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
        if(maxsum<0){
            maxsum=0;

        }
    }
    cout<<maxsum<<endl;

    return 0;
}