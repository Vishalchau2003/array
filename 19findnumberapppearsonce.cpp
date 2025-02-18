// //*****************BRUTE*********************///

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i,j, n;
//     cout << "enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n; i++)

//     {
//         cin >> arr[i];
//     }

//  for(i=0;i<n;i++){
//      int cont=0;
//      int num=arr[i];
//   for(j=0;j<n;j++){
//      if(arr[j]==num){
//         cont++;
//      }
//   }
//    if(cont==1){
//     cout<<num;
//  }
//  }

//     return 0;

// }

//****************BETTER*********************//
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, n;
//     cout << "enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n; i++)

//     {
//         cin >> arr[i];
//     }
//     // define an hash array of maximum element size
//     // find the maximum element
//       int maxi = arr[0];
//     for (i = 0; i < n; i++)
//     {
//        maxi=max(maxi,arr[i]);
//     }

//     int hash[maxi] = {0};
//     for (i = 0; i < n; i++)
//     {
//         hash[arr[i]]++;
//     }
//      for (i = 0; i < n; i++)
//     if (hash[arr[i]] == 1)
//     {
//         cout << i;
//     }
//     return 0;
// }

//****************BETTER*********************//
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, n;
//     cout << "enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n; i++)

//     {
//         cin >> arr[i];
//     }
//     map<int,int>mpp;
//     for(i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         if(mpp.second==1){
//             cout<<it.second;
//         }
//     }
//     return 0;
// }

//****************OPTIMAL********************//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array elements" << endl;
    for (i = 0; i < n; i++)

    {
        cin >> arr[i];
    }
    int xor1= 0;
    for (i = 0; i < n; i++)
    {
        xor1= xor1^arr[i];
    }
    cout<<xor1;

    return 0;
}