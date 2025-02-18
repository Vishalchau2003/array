//*************LEFT ROTATE ARRAY BY ONE PLACE*******************//

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;

//    cout <<" array elements after rotating " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<< arr[i];
//     }

//     return 0;
// }

//*************BRUETE left rotate array by d place*******************//

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int d;
//     cout << "enter the value of d till which u wanna left rotate" << endl;
//     cin >> d;
//     d=d%n;
//     cout << " array elements after rotating " << endl;
//     vector<int>temp;
//     for(int i=0;i<d;i++){
//     temp.push_back(arr[i]);
//     }
//     //or
//     // int temp[d];
//     //  for(int i=0;i<d;i++){
//     // temp[i]=arr[i];
//     // }

//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     int j=0;
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[j];
//          j++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
       
//     }

//     return 0;
// }

//*************OPTIMAL left rotate array by d place*******************//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cout << "enter the value of d till which u wanna left rotate" << endl;
    cin >> d;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

  
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
       
    }

    return 0;
}
//reverse function
// int first,last;
//  first=0;
//  last =n-1;
// for(int i=first;i<last;i++){
// if(first<=last){
//     int temp=arr[last];
//     arr[first]=arr[last];
//     arr[last]=temp;
//     first++;
//     last--;
// }
// }