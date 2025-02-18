// //***************BRUTE***************//
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
//     cout << endl;
//     set<int> st;
//     for (int i = 0; i < n; i++)
//     {
//         st.insert(arr[i]);
//     }

//     int index = 0;
//     for (auto it : st)
//     {

//         arr[index] = it;
//         index++;
//     }
//     cout << index;
//suppose we have 3 elements so after storing value at2nd index the index will increase by 1 and will
//become 3 so that is the total number of unique elements
//     return 0;
// }

//***************OPTIMAL***************//
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
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i+1]=arr[j];
            i++;

        }
    }
    cout<<i+1;

    return 0;
}