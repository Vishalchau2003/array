
//**************BRUTE*****************//

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
//    for(i=0;i<n;i++){
//     int cont=0;
//     int num=arr[i];
//     for(j=0;j<n;j++){
//         if(arr[j]==num){
//             cont++;
//         }
//     }
//     if(cont>n/2){
//         cout<<"majority element is"<<" "<<num;
//         break;
//     }
//    }

  

//     return 0;
// }


//**************BETTER*****************//

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
//    map<int,int>mpp;

//  for(i=0;i<n;i++){
//     mpp[arr[i]]++;
//  }
//  for(auto it:mpp){
//     if(it.second>n/2){
//         cout<<"majority element is"<<it.first;
//         //return the key
//     }
//  }
//     return 0;
// }




//**************OPTIMAL*****************//

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
    //find the element
    int cnt=0;
    int element;
    if(cnt==0){
        cnt++;
        element=arr[i];
    }
    else if(arr[i]==element){
        cnt++;
    }
    else{
        cnt--;
    }
   //verify the majority element 
    int cnt1=0;
 for(i=0;i<n;i++){
   
    if(arr[i]==element){
        cnt1++;
    }
 }
 if(cnt1>n/2){
    cout<<element<<endl;
 }
    return 0;
    
}