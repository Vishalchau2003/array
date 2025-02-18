///******BRUTE*******//
// class Solution {
//   public:
//     int maxLen(vector<int>& arr) {
//         int n=arr.size();
//         int length=0;
//         int maxi=0;
//         for(int i=0;i<n;i++){
//                int sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=arr[j];
//                 if(sum==0){
//                     length=j-i+1;
//                     maxi=max(maxi,length);
//                 }
//             }
//         }
//         if(maxi==0){
//             return 0;
//         }
//         return maxi;
//     }
// };