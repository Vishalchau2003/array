//*************BRUTE**************//
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, n;
//     cout << "enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     vector<int>temp;
//      for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//         temp.push_back(arr[i]);
//     }
//     }
//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//     }
//     for(int i=temp.size();i<n;i++){
//         arr[i]=0;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
       
//     }

//     return 0;
// }



//*************OPTIMAL**************//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //just find the first zero
    int j=-1; 
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      j=i;
      break;
    }
  }
  for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
    
    }
  }
   for (int i = 0; i < n; i++)
    {
        cout << arr[i];
       
    }
    return 0;
}