// //******BRUTE********//

// #include <bits/stdc++.h>
// #include <vector>
// #include <set>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n-1; i++)
//     //n-1 because array have n-1 elements
//     {
//         cin >> arr[i];
//     }
//     for (i = 1; i <= n; i++)
//     {
//         int flag = 0;
//         for (j = 0; j < n-1; j++)
//         {
//             if (arr[j] == i)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             cout << i;
//         }
//     }

//     return 0;
// }


// //******BETTER********//

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n-1; i++)
//     //n-1 because array have n-1 elements
//     {
//         cin >> arr[i];
//     }
//     //suppose we have last values as missing for example n=5 and 5 is misssing 
//     //we want to print last index so we have to take hash array till 6 so index will from 0 to5

//hash[arr[i]]=hash[1]=1 mark krna hai so hash[0]is not marked as one so while checking just 
//check from i=1

//         int hash[n+1]={0};
//     for(i=0;i<n;i++){
//         hash[arr[i]]=1;

//     }
//  
//    for(i=1;i<=n;i++){
//         if(hash[i]==0){
//             cout<<i;
//         }
        
//     }
//     return 0;
// }


//******OPTIMAL*******//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < n-1; i++)
    //n-1 because array have n-1 elements
    {
        cin >> arr[i];
    }
    
    int xor1=0;
     int xor2=0;
    for(int i=0;i<n-1;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^(n);
    //humne n ke saath xor nhi kiya
    int XORANS=xor1^xor2;
    cout<<XORANS<<endl;

  
    return 0;
}






