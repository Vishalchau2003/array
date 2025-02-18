//****************BRUTE********************//

// #include <bits/stdc++.h>
// #include<vector>
// #include<set>
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
//     set<int> st;
//     for (i = 0; i < n1; i++)
//     {
//         st.insert(arr1[i]);
//     }
//     for (i = 0; i < n2; i++)
//     {
//         st.insert(arr2[i]);
//     }
//     vector<int> union1;
//     for (auto it : st)
//     {
//         union1.push_back(it);
//     }

//     for (int i = 0; i < st.size(); i++)
//     {
//         cout << union1[i];
//     }
//     return 0;
// }

//****************OPTIMAL********************//

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

    vector<int> union1;
    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            //union1.size()==0 if it is first time then allways take it
            //union.back() != arr1[i]...pichla element that we took in union array ke equal nhi hone chahiye
            if (union1.size()==0||union1.back() != arr1[i])
            {
                union1.push_back(arr1[i]);
               
            }
             i++;
        }
        else
        {
             if (union1.size()==0||union1.back() != arr2[j])
            {
                
                union1.push_back(arr2[j]);
               
            }
            
            
            j++;
        }
    }
    while (i < n1)
    {
        if (union1.size()==0||union1.back() != arr1[i])
        {
            union1.push_back(arr1[i]);
          
        }
          i++;
    }
    while (j < n2)
    {
        if (union1.size()==0||union1.back() != arr2[j])
        {
            union1.push_back(arr2[j]);
           
        }
         j++;
    }

    for (int i = 0; i < union1.size(); i++)
    {
        cout << union1[i];
    }

    return 0;
}