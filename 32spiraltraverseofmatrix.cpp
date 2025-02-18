//*********OPTIMAL ************//
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
         vector<vector<int>> spiral(n, vector<int>(m));

    int top=0;
    int bottom=n-1;
    int left=0;
    int right=m-1;
    

    while(top<=bottom&&left<=right){
    for(int i=left;i<=right;i++){
        spiral.push_back(arr[top][i]);
        
    }
    top++;
    for(int i=top;i<=bottom;i++){
        spiral.push_back(arr[i][right]);

    }
    right--;
    if(top<=bottom){
    for(int i=right;i>=left;i--){
    spiral.push_back(arr[bottom][i]);

    }
     bottom--;
    }
    if(left<=right){
     for(int i=bottom;i>=top;i--){
        spiral.push_back(arr[i][left]);
     }
     left++;
    }
    }
    // Print the modified matrix
    cout << "Printing the modified matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << spiral[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the rows: ";
    cin >> n;
    cout << "Enter the columns: ";
    cin >> m;

    // Declare the matrix
    int arr[n][m];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j]; // Input the matrix elements
        }
    }

    // Vector to store the spiral order
    vector<int> spiral;

    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;

    while (top <= bottom && left <= right)
    {
        // Traverse from left to right
        for (int i = left; i <= right; i++)
        {
            spiral.push_back(arr[top][i]);
        }
        top++;

        // top moved aur rahi baat top to bottom print hone ki it wont print because top is not less that or equal to bottom
        //single line ko consider kro the top increased by one than botttom
        //so below line will check t and wint let to print
        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++)
        {
            spiral.push_back(arr[i][right]);
        }
        right--;

        // Traverse from right to left
        //yaha pe needed tha check becuasse if u dont have anthing to print u cannt
        //top agar less or equal to bottoom hai then we can print
        //make sure u have row(by chcecking top<=bottom)
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                spiral.push_back(arr[bottom][i]);
            }
            bottom--;
        }

        // Traverse from bottom to top
        //make sure u have column by cgecking left<=right
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                spiral.push_back(arr[i][left]);
            }
            left++;
        }
    }

    // Print the spiral order
    cout << "Spiral order of the matrix:\n";
    for (int x : spiral)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}