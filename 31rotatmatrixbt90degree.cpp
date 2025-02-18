// //**********BRUTE**************//
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cout << "Enter the rows: ";
//     cin >> n;
//     cout << "Enter the columns: ";
//     cin >> m;

//     // Declare the matrix and initialize to some values (example, all 1s)
//     int arr[n][m];
//     cout << "Enter the elements of the matrix:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];  // Input the matrix elements
//         }
//     }
//     int ansarr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             ansarr[j][n-1-i]=arr[i][j];
           
//         }
//     }

//     // Print the modified matrix
//     cout << "Printing the modified matrix:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << ansarr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


//**********OPTIMAL **************//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the rows: ";
    cin >> n;
    cout << "Enter the columns: ";
    cin >> m;

    // Declare the matrix and initialize to some values (example, all 1s)
    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];  // Input the matrix elements
        }
    }
   
   for(int i=0;i<=n-2;i++){
    for(int j=i+1;j<=n-1;j++){
        swap(arr[i][j],arr[j][i]);
    }
     }
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
    //For a 2D array, you need to reverse each
    // row individually using reverse(arr[i], arr[i] + m).
     
   
    // Print the modified matrix
    cout << "Printing the modified matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
