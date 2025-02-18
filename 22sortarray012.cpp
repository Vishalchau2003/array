//**************BRUTE*****************//

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array elements: ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     vector<int> temp1;
//     vector<int> temp2;
//     vector<int> temp3;
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             temp1.push_back(arr[i]);
//         }
//        else if (arr[i] == 1)
//         {
//             temp2.push_back(arr[i]);
//         }
//        else
//         {
//             temp3.push_back(arr[i]);
//         }
//     }
//     int index=0;
//     for (i = 0; i < temp1.size(); i++)
//     {

//         arr[index++] = temp1[i];

//     }
//     for (i = 0; i < temp2.size(); i++)
//     {

//         arr[index++] = temp2[i];

//     }
//     for (i = 0; i < temp3.size(); i++)
//     {

//         arr[index++] = temp3[i];

//     }
//     cout << "sorted array elements: ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }

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
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;

//     for(i=0;i<n;i++){
//         if(arr[i]==0){
//             count0++;
//         }
//         else if(arr[i]==1){
//             count1++;
//         }
//         else{
//             count2++;
//         }
//     }

//     for (i = 0; i < count0; i++)
//     {

//         arr[i]=0;

//     }
//     for (i = count0; i < count0+count1; i++)
//     {

//         arr[i] =1;

//     }
//     for (i = count0+count1; i <n; i++)
//     {

//         arr[i]=2;

//     }

//     cout << "sorted array elements: ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }

//     return 0;
// }

//**************BETTER*****************//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while(mid<=high){
    if (arr[mid] == 0)
    {
        swap(arr[mid], arr[low]);
        low++;
        mid++;
    }
    else if(arr[mid]==1){
         mid++;
    }
    else{
        swap(arr[mid],arr[high]);
        high--;

    }
    }

    cout << "sorted array elements: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}