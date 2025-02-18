
// //********BRUTE**********//

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
//     int num;
//     cout<<"enter the value of k"<<endl;
//     cin>>num;
    
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int xorr=0;
//             for(int k=i;k<=j;k++){
//               xorr^=arr[k];
//             }
//             if(xorr==num){
//              cnt++;
//             }
//         }
//     }
//     cout<<cnt<<endl;
    
//     return 0;
// }



//********BETTER**********//

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
//     int num;
//     cout<<"enter the value of k"<<endl;
//     cin>>num;
    
//     int cnt=0;
//     for(int i=0;i<n;i++){
//            int xorr=0;
//         for(int j=i;j<n;j++){
//               xorr^=arr[j];
//               if(xorr==num){
//                 cnt++;
//               }
//              }

//         }

//     cout<<cnt<<endl;
    
//     return 0;
// }

//*******OPTIMAL**********//
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
    int num;
    cout<<"enter the value of num"<<endl;
    cin>>num;
   
   int cnt=0;
   int xr=0;
   map<int,int>hashmap;
   hashmap[xr]++;//it will take it into the map
   //[0,1] inserted in map

   for(int i=0;i<n;i++){
        xr^=arr[i];
        int x=xr^num;
        cnt+=hashmap[x]; //jitni baar x milega unti baar cnt will increase
        hashmap[xr]++;
        //put the xor in the map 
       
   }
    cout<<cnt<<endl;
    
    return 0;
}