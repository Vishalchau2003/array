// TYPE1-->GIVEN ROW AND COLUMN TELL THE ELEMENT AT THAT PLACE

//*********optimal***********//
// #include <bits/stdc++.h>
// using namespace std;
//  int result=1;
// int ncr(int n,int r){
//  int result=1;
//     for(int i=0;i<r;i++){
//     result=result*(n-i);
//     result=result/(i+1);

//     }

//     return result;
// }
// int main()
// {
//     int row,column;
//     cout<<"enter the row number"<<endl;
//     cin>>row;
//      cout<<"enter the column number"<<endl;
//     cin>>column;
//    cout<<"the value is"<<" "<< ncr(row-1,column-1)<<endl;
//     return 0;
// }

// TYPE 2-->PRINT ANY NTH ROW IN PASCAL TRIANGLE
//  //*********brute***********//
//  #include <bits/stdc++.h>
//  using namespace std;

// int ncr(int n,int r){
//     int result=1;
//     for(int i=0;i<r;i++){
//     result=result*(n-i);
//     result=result/(i+1);
//     }
//     return result;
// }

// int main()
// {
//     int row,column;
//     cout<<"enter the row number"<<endl;
//     cin>>row;

//     for(column=1;column<=row;column++){
//    cout<< ncr(row-1,column-1)<<" ";
//     }
//     return 0;
// }

//*********optimal***********//
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int row,column;
//     cout<<"enter the row number"<<endl;
//     cin>>row;
//     cout<<"1"<<" ";
//      long long result =1;

//     for(column=1;column<row;column++){

//         result=result*(row-column);
//         result=result/(column);
//         cout<<result<<" ";
//     }
//     return 0;
// }

// TYPE3--> GENERATE THE PASCAL TRIANGLE

///bruete solution on leetcode


// class Solution {
// public: 
// int ncr(int n ,int r){
//     int ans=1;
//     for(int i=0;i<r;i++){
//        ans=ans*(n-i);
//        ans=ans/(i+1);
//     }
//     return ans;
// }
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>>ans;
//         for(int i=1;i<=numRows;i++){
//             vector<int>temp;
//             for(int j=1;j<=i;j++){
//                  temp.push_back(ncr(i-1,j-1));
//             }
//             ans.push_back(temp);
//         }
        
//         return ans;
//     }
// };

//*********optimal***********//


int main()
{

    int n;
    cout << "enter the number of rows" << endl;
    cin >> n;
    cout<<pascaltriangle(n)<<" ";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Function to generate a single row of Pascal's Triangle
vector<int> generatereachrow(int row)
{
    long long result = 1; // Initialize to 1 for the first element
    vector<int> ansrow;
    ansrow.push_back(1); // First element is always 1
    for (int column = 1; column < row; column++)
    {
        result = result * (row - column) / column;
        ansrow.push_back(result);
    }
    return ansrow;
}

// Function to generate the entire Pascal's Triangle
vector<vector<int>> pascaltriangle(int n)
{
    vector<vector<int>> finalans;
    for (int i = 1; i <= n; i++) // Loop from 1 to n for 1-based row indexing
    {
        finalans.push_back(generatereachrow(i));
    }
    return finalans;
      //it is a type of vector<vector<int>> 
    //type of list ke andar list isiliye to return we took it as that
}

// Function to print the Pascal's Triangle
void printPascalTriangle(const vector<vector<int>> &triangle)
{
    for (const auto &row : triangle)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Generate and print Pascal's Triangle
    vector<vector<int>> triangle = pascaltriangle(n);
    printPascalTriangle(triangle);

    return 0;
}