// for second largest
//********* brute force solution************//

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     cout << "sorted array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
//     cout<<endl;
//     int largest = arr[n - 1];
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (arr[i] != largest)
//         {

//             int secondlargest = arr[i];
//             cout << secondlargest;
//             break;
//         }
//     }

//     return 0;
// }

//************BETTER***************//

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//    //find the largest
//    int largest=arr[0];
//    for(int i=0;i<n;i++){
//    if(arr[i]>largest){
//     largest=arr[i];
//    }
//    }
//    //find secondlargest
//    int secondlargest=-1;
//    for(int i=0;i<n;i++){
//     if(arr[i]>secondlargest&&arr[i]!=largest){
//         secondlargest=arr[i];
//     }

//    }
//    cout<<secondlargest;
//     return 0;
// }

//************OPTIMAL**************//
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0];
    int secondlargest = -1;
    // assume secoindlargest to be INT_MIN if array contains negative numbers
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        if(arr[i]<largest&&arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    cout<<secondlargest;

/////for second smallest
//   int smallest=arr[0];
//   int secondsmallest=INT_MAX;
//   for(int i=0;i<n;i++){
//     if(arr[i<smallest]){
//         secondsmallest=smallest;
//         smallest=arr[i];

//     }
//     if(arr[i]!=smallest&&arr[i]<secondsmallest){
//         secondsmallest=arr[i];

//     }
//   }
//   cout<<secondsmallest;
    return 0;
}