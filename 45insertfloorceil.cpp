// //search insert position
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
//     cout<<"enter the target element"<<endl;
//     cin>>target;
//     int ans=n;
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//      int mid=(low+high)/2;
//      if(arr[mid]>=target){
//       high=mid-1;
//       ans=mid;
//      }
//      else{

//         low=mid+1;
    
//      }
//     }
//     cout<<ans;
//     return 0;
// }


//floor ceil
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
    cout<<"enter the target element"<<endl;
    cin>>target;
    int ans=n;
    int low=0;
    int high=n-1;
    while(low<=high){
     int mid=(low+high)/2;
     if(arr[mid]<=target){
      low=mid+1;
      ans=arr[mid];//we need the ans not the index
     }
     else{

        high=mid-1;
    
     }
    }
    
    return 0;
}