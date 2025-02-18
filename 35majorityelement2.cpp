//**************BRUTE**************//

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> majorityElement(vector<int> v) {
//     int n = v.size(); //size of the array
//     vector<int> ls; // list of answers

//     for (int i = 0; i < n; i++) {
//         //selected element is v[i]:
//         // Checking if v[i] is not already
//         // a part of the answer:
//         if (ls.size() == 0 || ls[0] != v[i]) {
//             int cnt = 0;
//             for (int j = 0; j < n; j++) {
//                 // counting the frequency of v[i]
//                 if (v[j] == v[i]) {
//                     cnt++;
//                 }
//             }

//             // check if frquency is greater than n/3:
//             if (cnt > (n / 3))
//                 ls.push_back(v[i]);
//         }

//         if (ls.size() == 2) break;
//     }

//     return ls;
// }

// int main()
// {
//     vector<int> arr = {11, 33, 33, 11, 33, 11};
//     vector<int> ans = majorityElement(arr);
//     cout << "The majority elements are: ";
//     for (auto it : ans)
//         cout << it << " ";
//     cout << "\n";
//     return 0;
// }



//************BETTER***********//
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> majorityElement(vector<int> v) {
//     int n = v.size(); //size of the array
//     vector<int> ls; // list of answers

//     //declaring a map:
//     map<int, int> mpp;

//     // least occurrence of the majority element:
//     int mini = int(n / 3) + 1;

//     //storing the elements with its occurnce:
//     for (int i = 0; i < n; i++) {
//         mpp[v[i]]++;

//         //checking if v[i] is
//         // the majority element:
//         if (mpp[v[i]] == mini) {
//             ls.push_back(v[i]);
//         }
//         if (ls.size() == 2) break;
//     }

//     return ls;
// }

// int main()
// {
//     vector<int> arr = {11, 33, 33, 11, 33, 11};
//     vector<int> ans = majorityElement(arr);
//     cout << "The majority elements are: ";
//     for (auto it : ans)
//         cout << it << " ";
//     cout << "\n";
//     return 0;
// }


//*************OPTIMAL(LEETCODE)************//


//  class Solution {
// public:


//     vector<int> majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         if(n==0){
//             return { };
//         }
//             vector<int>v;
//             int el1;
//             int el2;
//             int cnt1=0;
//             int cnt2=0;
//         for(int i=0;i<n;i++){
//              if(cnt1==0&&nums[i]!=el2){
//                 cnt1=1;
//                 el1=nums[i];
//              }
//              else if(cnt2==0&&nums[i]!=el1){
//                 cnt2=1;
//                 el2=nums[i];
//              }
//              else if(el1==nums[i]){
//                 cnt1++;
//              }
//              else if(el2==nums[i]){
//                 cnt2++;
//              }
//              else{
//                 cnt1--;
//                 cnt2--;
//              }
//         }
//         vector<int>ans;
//         int cnt3=0;
//         int cnt4=0;
//         int mini=int(n/3)+1;
//         for(int i=0;i<n;i++){
//             if(el1==nums[i]){
//                 cnt3++;
//             }
//             if(el2==nums[i]){
//                 cnt4++;
//             }
//         }
//         if(cnt3>=mini){
//              ans.push_back(el1);
//         }
//         if(cnt4>=mini){
            
//               ans.push_back(el2);
//         }
        
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };
   
