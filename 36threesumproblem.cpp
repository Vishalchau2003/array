
//********BRUTE(LEETCODE)*******//
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size();
//         set<vector<int>>st;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     if(i==j||j==k||k==i){
//                         continue;
//                     }
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         vector<int>v={nums[i],nums[j],nums[k]};
//                         sort(v.begin(),v.end());
//                          st.insert(v);
//                     }
//                 }
//             }
//         }
//          vector<vector<int>>ans(st.begin(),st.end());
        
//             return ans;
        

//     }
// };

//*********BETTER***********//
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size: ";
//     cin >> n;

//     // Declare the matrix
//     int arr[n];
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < n; i++)
//     {

//         cin >> arr[i]; // Input the matrix elements
//     }

//      set<vector<int>> st; // To store unique triplets

//     // Finding triplets
//     for (int i = 0; i < n; i++)
//     {
//         set<int> hashset; // Hashset for the current i
//         //// after i changes we will get a new hashset
//         for (int j = i + 1; j < n; j++)
//         {
//             int third = -(arr[i] + arr[j]); // Target value
//             if (hashset.find(third) != hashset.end())
//             {
//                 // If third is found in the hashset
//                 vector<int> temp = {arr[i], arr[j], third};
//                 sort(temp.begin(), temp.end()); // Sort to ensure uniqueness
//                 st.insert(temp);               // Insert into the set
//             }
//             hashset.insert(arr[j]); // Add current element to hashset
//         }
//     }

//     vector<vector<int>> ans(st.begin(), st.end());

//     // Print all triplets
//     cout << "Triplets are:\n";
//     for (const auto &triplet : ans)
//     {
//         for (int num : triplet)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
//     // auto: Automatically deduces the type of each element in ans. Since ans is a vector<vector<int>>, triplet is deduced as a vector<int>.
//     //&: Uses a reference to avoid copying each triplet, which is more efficient.
//     // const: Ensures the triplet is not accidentally modified during iteration.

//     // Outer Loop (for (const auto &triplet : ans)): Iterates over each triplet in the ans vector.
//     // Inner Loop (for (int num : triplet)): Iterates over the numbers within each triplet.
//     // The cout statements print the numbers in the current triplet, with spaces between numbers and a newline between different triplets.

//     return 0;
// }

//************BETTER(LEETCODE)*************//

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size();
//          set<vector<int>>st;
//        for(int i=0;i<n;i++){
//          set<int>hashset;
//         for(int j=i+1;j<n;j++){
//             int third=-(nums[i]+nums[j]);
//             if(hashset.find(third)!=hashset.end()){
//                 vector<int>temp={nums[i],nums[j],third};
//                 sort(temp.begin(),temp.end());
//                 st.insert(temp);
//             }
//             hashset.insert(nums[j]);

//         }
//        }
//        vector<vector<int>>ans(st.begin(),st.end());
//        return ans;
//     }
// };

//*********OPTIMAL***********//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    // Declare the array
    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input the array elements
    }

    vector<vector<int>> ans;
    sort(arr, arr + n); // Sort the array to simplify finding triplets

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue; // Skip duplicates for the first element
        }
        else
        {
            int j = i + 1;
            int k = n - 1;

            while (j < k)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum < 0)
                {
                    j++;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    ans.push_back(temp); // Add the triplet to the result list

                    // Move `j` forward while avoiding duplicates
                    while (j < k && arr[j] == arr[j + 1])
                    {
                        j++;
                    }
                    j++; // Move to the next unique element

                    // Move `k` backward while avoiding duplicates
                    while (j < k && arr[k] == arr[k - 1])
                    {
                        k--;
                    }
                    k--; // Move to the next unique element
                }
            }
        }
    }

    // Print the list of triplets
    cout << "Triplets are:\n";
    for (const auto &triplet : ans)
    {
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}