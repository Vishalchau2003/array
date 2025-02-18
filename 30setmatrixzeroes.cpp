// //************BRUTE************//

// #include <bits/stdc++.h>
// using namespace std;

// /*In C++, you cannot write arr[][] as a function parameter because the compiler needs
// to know the size of at least the second dimension of a 2D array to calculate memory
//  offsets during array indexing.*/

// // void markrows(int arr[][100],int i,int m){
// //     for(int j=0;j<m;j++){
// //         if(arr[i][j]!=0){
// //             arr[i][j]=-1;

// //         }
// //     }
// // }

// // void markcolumns(int arr[][100],int j,int n){
// //      for(int i=0;i<n;i++){
// //         if(arr[i][j]!=0){
// //             arr[i][j]=-1;

// //         }
// //     }

// // }

// void markrows(vector<vector<int>> &arr, int i, int m) {
//     for (int j = 0; j < m; j++) {
//         if (arr[i][j] != 0) {
//             arr[i][j] = -1; // Mark non-zero elements in the row
//         }
//     }
// }

// void markcolumns(vector<vector<int>> &arr, int j, int n) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i][j] != 0) {
//             arr[i][j] = -1; // Mark non-zero elements in the column
//         }
//     }
// }

// int main() {
//     int n, m;
//     cout << "Enter the rows: ";
//     cin >> n;
//     cout << "Enter the columns: ";
//     cin >> m;

//     vector<vector<int>> arr(n, vector<int>(m));

// //  vector<vector<int>> arr → Declares a 2D vector named arr.
// //(n, vector<int>(m)) → Initializes arr with n rows, where each row is a vector<int> of size m, initialized with default values (0 for int)

//     cout << "Enter the array elements: ";

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     // Mark rows and columns that need to be set to zero
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] == 0) {
//                 markrows(arr, i, m);
//                 markcolumns(arr, j, n);
//             }
//         }
//     }

//     // Convert all marked elements (-1) to zero
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] == -1) {
//                 arr[i][j] = 0;
//             }
//         }
//     }

//     // Print the resulting array
//     cout << "Printing the array elements:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//**********BETTER**************//

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

//     int colmarked[m] = {0};
//     int rowmarked[n] = {0};

//     // First pass: Mark rows and columns that contain a 0
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == 0) {
//                 colmarked[j] = 1;
//                 rowmarked[i] = 1;
//             }
//         }
//     }

//     // Second pass: Set elements in the marked rows and columns to 0
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (colmarked[j] || rowmarked[i]) {
//                 arr[i][j] = 0;
//             }
//         }
//     }

//     // Print the modified matrix
//     cout << "Printing the modified matrix:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


//leetcode better
// class Solution {
// public:
  


//     void setZeroes(vector<vector<int>>& matrix) {
//         int n = matrix.size();        
//         int m = matrix[0].size();
//         vector<int>col(m);
//         vector<int>row(n);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){
//                    col[j]=1;
//                    row[i]=1;
//                 }
//             }
//         }
//            for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(row[i]==1||col[j]){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
        
//     }
// };


//**********OPTIMAL**************//

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
    int arr[n][m];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j]; // Input the matrix elements
        }
    }
    int col0 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                // we mark the i th row
                arr[i][0] = 0;
                // and j th column
                if (j != 0)
                {
                    arr[0][j] = 0;
                    // agar j=0 hai and arr[i][j]==0 hai so we should not mark in the matrix
                    // but wee should mark the element that lies out to zero
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }
     for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if(arr[i][j]!=0){
                //check for column and row
             if(arr[0][j]==0||arr[i][0]==0){
                arr[i][j]=0;
             }
            }
        }
    }
    if(arr[0][0]==0){
        for(int j=0;j<m;j++){
        arr[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<n;i++){
        arr[i][0]=0; 
        }
    }

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