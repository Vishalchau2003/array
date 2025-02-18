//***************BRUTE***********//
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
//     int target;
//     cout<<"enter the target"<<endl;
//     cin>>target;
//     for(i=0;i<n;i++){

//         for(j=0;j<n;j++)
//           or this ..below one is more optimized
//         for(j=i+1;j<n;j++){
//             if(i==j){
//                 continue;
//             }
//             else{
//                 if(arr[i]+arr[j]==target){
//                     cout<<i<<endl<<j;

//                 }
//             }

//         }

//     }

//     return 0;
// }


//**********BETTER***********//

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> twoSum(int n, vector<int> &arr, int target) {
//     unordered_map<int, int> mpp;
//     for (int i = 0; i < n; i++) {
//         int num = arr[i];
//         int moreNeeded = target - num;
//         if (mpp.find(moreNeeded) != mpp.end()) {
//             return {mpp[moreNeeded], i};
//         }
//         mpp[num] = i;

////The map (mpp[num] = i;) ensures that each number's latest occurrence is stored, so a number won't pair with itself.
////Your function uses an unordered_map<int, int> mpp, which stores numbers as keys and their latest index as the value.

////As soon as it finds a valid pair, it immediately returns the indices, stopping further processing.

//     }
//     return { -1, -1};
// }

// int main()
// {
//     int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     vector<int> ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 2: [" << ans[0] << ", "
//          << ans[1] << "]" << endl;
//     return 0;
// }
//*************** SLIIGHTLY BETTER***********//


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   sort(arr,arr+n);
    int target;
    cout << "enter the target" << endl;
    cin >> target;
    int left = 0;
    int right = n - 1;
      while(left<right){
       if(arr[left]+arr[right]==target){
        cout<<"yes";
        break;
       }
       else if(arr[left]+arr[right]<target){
        left++;
       }
       else if(arr[left]+arr[right]>target){
        right--;
       }
       else{
        cout<<"no";
       }
    }
    
    return 0;
}


