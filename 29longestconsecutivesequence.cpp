// //************BRUTE************//

// #include <bits/stdc++.h>
// using namespace std;
// bool ls(int arr[], int num, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == num)
//         {
//             return true;
//         }
//     }
//     return false; // Only return false after checking all elements
// }
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
//     int longest = 1;
//     int cnt = 1;
//     for (i = 0; i < n; i++)
//     {
//         int x = arr[i];
//         int cnt = 1;
//         while (ls(arr, x + 1, n) == true)
//         {
//             x = x + 1;
//             cnt++;
//             longest=max(longest,cnt);
//         }
        
//     }
//     cout<<"longest count is:"<<longest<<endl;

//     return 0;
// }


// //************BETTER************//

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
//     sort(arr,arr+n);
//     int lastsmaller=INT_MIN;
//     int longest=1;
//     int cnt=0;
//     for(i=0;i<n;i++){
//         if(arr[i]-1==lastsmaller){
//             cnt++;
//             lastsmaller=arr[i];

//         }
//         else if(lastsmaller!=arr[i]){
//             cnt=1;
//             lastsmaller=arr[i];
//         }
//         longest=max(longest,cnt);
//     }
   
//     cout<<"longest count is:"<<longest<<endl;

//     return 0;
// }



//************OPTIMAL************//


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int longest = 1; // Variable to store the longest sequence length
    unordered_set<int> st;

    // Insert array elements into the set
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    // Iterate over the set elements
    for (auto it : st)
    {
        // Start a new sequence only if the previous number is not in the set
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;  // Count of the current sequence
            int x = it;   // Start from the current number

            // Check for consecutive numbers in the sequence
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt++;
            }

            // Update the longest sequence length
            longest = max(longest, cnt);
        }
    }

    cout << "The length of the longest consecutive sequence is: " << longest << endl;

    return 0;
}