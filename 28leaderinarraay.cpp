// //************BRUTE************//

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array elements: ";

//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     vector<int>ansleader;
//     //creating a vectpr to store leader values
//     for(i=0;i<n;i++){
//         int num;
//         num=arr[i];
//         int leader=1;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>num){
//                 leader=0;
//               break;
//             }

//         }
//         if(leader==1){
//             ansleader.push_back(num);
//         }

//     }

//     cout << "printing the leader elements: ";

//     for (i = 0; i <ansleader.size(); i++)
//     {
//         cout << ansleader[i];
//     }

//     return 0;
// }

//************OPTIMAL************//

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
    vector<int> ansleader;
    int maxi = INT_MIN;
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ansleader.push_back(arr[i]);
        }
        //keep the track of right maximum
        maxi = max(arr[i],maxi);
    }

    cout << "printing the leader elements: ";

    for (i = 0; i < ansleader.size(); i++)
    {
        cout << ansleader[i];
    }

    return 0;
}