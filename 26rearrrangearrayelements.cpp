// //************BRUTE*****************//

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
//     vector<int> positive;
//     vector<int> negative;
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             positive.push_back(arr[i]);
//         }
//         else
//         {
//             negative.push_back(arr[i]);
//         }
//     }
//     for(i=0;i<n/2;i++){
//         arr[2*i]=positive[i];
//          arr[2*i+1]=negative[i];
//     }
//       cout << "printing the array elements: ";

//     for (i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//     }

//      return 0;
// }

//************OPTIMAL*****************//

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

//     int ansarr[n];
//   int pos = 0;
//         int neg = 1;
//     for (i = 0; i < n; i++)
//     {
        
//         if (arr[i] < 0)
//         {
//             if (neg < n){
//                 ansarr[neg] = arr[i];
//             neg = neg + 2;
//         }
//     }
//     else
//     {
//         if (pos < n)
//         {
//             ansarr[pos] = arr[i];
//             pos = pos + 2;
//         }
//     }

// }
// cout << "printing the array elements: ";

// for (i = 0; i < n; i++)
// {
//     cout << ansarr[i];
// }

// return 0;
// }


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
    vector<int>pos;
    vector<int>neg;
    for(i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);

        }
        else{
            neg.push_back(arr[i]);
        } 

    } 
    if(pos.size()>neg.size()){
       for(i=0;i<neg.size();i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
        int index=neg.size()*2;
        for(i=neg.size();i<pos.size();i++){
            arr[index]=pos[i];
            index++;
        }

       }
    }
    else{
        for(i=0;i<pos.size();i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
        int index=pos.size()*2;
        for(i=pos.size();i<neg.size();i++){
            arr[index]=neg[i];
            index++;
        }

       }

    }
    cout << "printing the array elements: ";

    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
