// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=0;
//         int j=0;
//         vector<int>v;
//         while(i<m&&j<n){
//             if(nums1<=nums2){
//                v.push_back(nums1[i]);
//                i++;
//             }
//             else{
//                 v.push_back(nums2[j]);
//                 j++;
//             }
//         }
//         while(i<m){
//             v.push_back(nums1[i]);

//         }
//          while(j<n){
//             v.push_back(nums2[j]);
//         }
        
//         int index=0;
//         for(int i=0;i<v.size();i++){
//             nums1[index]=v[i];
//             index++;
//         }
//     }
// };


// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int j=0;
//        for(int i=m;i<m+n;i++){
//           nums1[i]=nums2[j];
//           j++;
//        }
//        sort(nums1.begin(),nums1.end());
       
//     }
// };




// class Solution {
//     public:
//         void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//           int i=m-1;
//           int j=n-1;
//           int k=m+n-1;
//           while(i>=0&&j>=0){
//             if(nums1[i]>=nums2[j]){
//                 nums1[k]=nums1[i];
//                 i--;
//                 k--;
//             }
//             else{
//                 nums1[k]=nums2[j];
//                 j--;
//                 k--;
//             }
//           }
//           while(i>=0){
//              nums1[k]=nums1[i];
//                 i--;
//                 k--;
//           }
//            while(j>=0){
//              nums1[k]=nums2[j];
//                 j--;
//                 k--;
//           }
           
//         }
//     };