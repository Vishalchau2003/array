//*********BRUTE***********//

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size: ";
//     cin >> n;

//     // Declare the array
//     int arr[n];
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i]; // Input the array elements
//     }
//     int target;
//     cout << "enter the target" << endl;
//     cin >> target;
//     set<vector<int>> st;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 for (int l = k + 1; l < n; l++)
//                 {
//                     long long sum = arr[i] + arr[j];
//                     sum += arr[k];
//                     sum += arr[l];
//                     if (sum == target)
//                     {
//                         vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
//                         sort(temp.begin(), temp.end());
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }
//     }
//     // Convert set to vector
//     vector<vector<int>> ans(st.begin(), st.end());

//     // Print all quadruplets
//     cout << "Quadruplets are:\n";
//     for (const auto &quad : ans)
//     {
//         for (int num : quad)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


///***********BRUTE(LEETCODE)***********//
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         set<vector<int>>st;
//         for(int i=0;i<n;i++){
//            for(int j=i+1;j<n;j++){
//                for(int k=j+1;k<n;k++){
//                 for(int l=k+1;l<n;l++){
                   
//                     if(nums[i]+nums[j]+nums[k]+nums[l]==target){
//                            vector<int>temp={nums[i], nums[j], nums[k], nums[l]};
//                           st.insert(temp);
//                     }
//                 }
//                }
//            }
//         }
//         vector<vector<int>>result(st.begin(),st.end());
//         return result;
        
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

//     // Declare the array
//     int arr[n];
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i]; // Input the array elements
//     }
//     int target;
//     cout << "enter the target" << endl;
//     cin >> target;
//     set<vector<int>> st;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i + 1; j < n; j++)
//         {
//             set<long long> hashset;
//             for (int k = j + 1; k < n; k++)
//             {
//                 long long sum = arr[i] + arr[j];
//                 sum += arr[k];
//                 long long forth = target - (sum);
//                 if (hashset.find(forth) != hashset.end())
//                 {
//                     vector<int> temp = {arr[i], arr[j], arr[k], forth};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(arr[k]);
//             }
//         }
//     }

//     // Convert set to vector
//     vector<vector<int>> ans(st.begin(), st.end());

//     // Print all quadruplets
//     cout << "Quadruplets are:\n";
//     for (const auto &quad : ans)
//     {
//         for (int num : quad)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//************BETTER(LEETCODE)*********//
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         set<vector<int>>st;
//         for(int i=0;i<n;i++){
//            for(int j=i+1;j<n;j++){
//             set<int>hashset;
//                for(int k=j+1;k<n;k++){
//                   int fourth=target-(nums[i]+nums[j]+nums[k]);
//                   if(hashset.find(fourth)!=hashset.end()){
//                     vector<int>temp={nums[i],nums[j],nums[k],fourth};
//                     st.insert(temp);
//                   }
//                   hashset.insert(nums[k]);
//                 }
//                }
//            }
//            vector<vector<int>>ans(st.begin(),st.end());
//            return ans;
//     }
// };

//*********OPTIMAL**********//

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
    int target;
    cout << "enter the target" << endl;
    cin >> target;
    vector<vector<int>> ans;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])

            continue;

        for (int j = i + 1; j < n; j++)
        {
            
            if (j > i+1 && arr[j] == arr[j - 1])
            //j>i+1 means it's not the first element of j then u can consider
                continue;
            int k = j + 1;
            int l = n - 1;
           
            while (k < l)
            {   
                 long long sum = arr[i] + arr[j];
                 sum += arr[k];
                 sum += arr[l];
                if (sum < target)
                {
                    k++;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    vector<int> temp = {arr[j], arr[j], arr[k], arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && arr[k] == arrr[k - 1])
                    {
                        //we checked this while condition because it does not overflow
                        k++;
                    }
                    while (k < l && arr[l] == arrr[l + 1])
                    {
                        l--;
                    }
                }
            }
        }
    }
    //     // Print all quadruplets
    cout << "Quadruplets are:\n";
    for (const auto &quad : ans)
    {
        for (int num : quad)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

//****************OPTIMAL(LEETCODE)************************//
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//           vector<vector<int>>ans;
//         for(int i=0;i<n;i++){
//             if(i>0&&nums[i]==nums[i-1]){
//                 continue;
//             }
//             for(int j=i+1;j<n;j++){
//                 if(j!=i+1&&nums[j]==nums[j-1]){
//                     continue;
//                 }
//                 int k=j+1;
//                 int l=n-1;
//                 while(k<l){
//                     long long sum=nums[i]+nums[j];
//                     sum+=nums[k];
//                     sum+=nums[l];
//                     if(sum<target){
//                        k++;
//                     }
//                     else if(sum>target){
//                        l--;
//                     }
//                     else{
//                       vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
//                       ans.push_back(temp);
//                       k++;
//                       l--;
//                       while(k<l&&nums[k]==nums[k-1]){
//                         k++;
//                       }
//                       while(k<l&&nums[l]==nums[l+1]){
//                         l--;
//                       }
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };