// //**************BRUTE*******************//

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, j, n1, n2;
//     cout << "enter the size of the array1" << endl;
//     cin >> n1;
//     int arr1[n1];
//     cout << "enter the array1 elements" << endl;
//     for (int i = 0; i < n1; i++)
//     {
//         cin >> arr1[i];
//     }

//     cout << "enter the size of the array2" << endl;
//     cin >> n2;
//     int arr2[n2];
//     cout << "enter the array2 elements" << endl;
//     for (int i = 0; i < n2; i++)
//     {
//         cin >> arr2[i];
//     }
//     vector<int> intersection1;
//     int visited[n2]={0};
//     //initialize a array visited with size of 2nd array and elements 0
//     for (i = 0; i < n1; i++)
//     {
//         for (j = 0; j < n2; j++)
//         {
//             if (arr1[i] == arr2[j]&&visited[j]==0)
//             {
//                 intersection1.push_back(arr1[i]);
//                 visited[j]=1;
//                 break;
//             }
//             if(arr1[i]<arr2[j]){
//                 break;
//             }
//         }
//     }
//        for (int i = 0; i < intersection1.size(); i++)
//     {
//         cout << intersection1[i];
//     }




//     return 0;
// }

//**************OPTIMAL*******************//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n1, n2;
    cout << "enter the size of the array1" << endl;
    cin >> n1;
    int arr1[n1];
    cout << "enter the array1 elements" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "enter the size of the array2" << endl;
    cin >> n2;
    int arr2[n2];
    cout << "enter the array2 elements" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
   vector<int> intersection1;
   i=0;
   j=0;
   while(i<n1&&j<n2){
    if(arr1[i]<arr2[j]){
        i++;
    }
    else if(arr2[j]<arr1[i]){
        j++;
    }
    else{
        intersection1.push_back(arr1[i]);
        i++;
        j++;
    }
   }
       for (int i = 0; i < intersection1.size(); i++)
    {
        cout << intersection1[i];
    }




    return 0;
}
