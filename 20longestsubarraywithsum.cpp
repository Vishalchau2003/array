// //*****************BRUTE*********************///

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
    
//     int p;
//     cout << "Enter the sum p: ";
//     cin >> p;
    
//     int len = 0;
    
//     // Loop through all possible subarrays
//     for (i = 0; i < n; i++)
//     {
//         int sum = 0;  // Start fresh sum for each subarray starting at i
//         for (j = i; j < n; j++)  // j runs from i to n-1
//         {
//             sum += arr[j];  // Add current element to the sum
//             if (sum == p)  // If sum matches p, check the length
//             {
//                 len = max(len, j - i + 1);  // Update the max length of subarray
//             }
//         }
//     }
    
//     cout << "Length of the longest subarray with sum " << p << " is: " << len << endl;

//     return 0;
// }



// //*****************BETTER FOR POSITIVES AND OPTIMAL FOR ARRAY HAVING POSITIVES ,NEGATIVES AND ZEROES*********************///

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

// class Solution {
// public:
//     int longestSubarray(vector<int>& arr, int k) {
//         int n = arr.size();
//         int maxlength = 0;
//         unordered_map<int, int> hashmap; // Use unordered_map for better performance
//         int sum = 0;

//         for (int i = 0; i < n; i++) {
//             sum += arr[i];

//             // Check if the entire subarray from index 0 to i has a sum equal to k
//             if (sum == k) {
//                 maxlength = max(maxlength, i + 1);
//             }

//             // Check if there exists a subarray ending at index i with sum k
//             int presum = sum - k;
//             if (hashmap.find(presum) != hashmap.end()) {
//                 int length = i - hashmap[presum];
//                 maxlength = max(maxlength, length);
//             }

//             /*We are interested in the longest subarray with a sum of k.
//              Suppose at index i, the prefix sum is sum.
//              If there exists an earlier index j where presum = sum - k, the subarray (j + 1 to i) has a sum of k.
//              To maximize the length of this subarray, we need j to be the smallest index where presum occurred, i.e., the first occurrence.*/
             
//              /*If we store the first occurrence of a prefix sum, we avoid overwriting it when the same prefix sum is encountered again at a later index.
//             This prevents smaller subarrays (due to later occurrences of the prefix sum) from being used in calculations, ensuring we always calculate the longest subarray.
//              */
//             // Store the first occurrence of the prefix sum
//             if (hashmap.find(sum) == hashmap.end()) {
//                 hashmap[sum] = i;
//             }
            
//         }

//         return maxlength;
//     }
// };
    
//     cout << "Length of the longest subarray with sum " << p << " is: " << len << endl;

//     return 0;
// }

// //*****************OPTIMAL FOR POSITIVES*********************///

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
   vector<int>arr(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int p;
    cout << "Enter the sum p: ";
    cin >> p;
    int left=0;
    int right=0;
    int len = 0;
    int sum=arr[0];
    while(right<n){
        //pahle check kro ki sum to p se exceed nhi na kr diya if kr diya then start subtracting till p se kam na ho jaaye
        while(left<=right&&sum>p){
            sum-=arr[left];
            left++;
        }
        if(sum==p){
           len=max(len,right-left+1);
        }
        right++;//first move then add
        if(right<n){
            sum+=arr[right];
        }
    }
     cout << "Length of the longest subarray with sum " << p << " is: " << len << endl;
    return 0;
}