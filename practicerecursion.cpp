// #include<bits/stdc++.h>
// using namespace std;
// void print(int i,int n){
//     if(i==5){
//         return ;
//     }
//     else{
//         cout<<"raj"<<endl;
//     }
//     print(i+1,n);
// }
// int main(){
//     print(1,5);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
 if(i>10){
    return;
 }
 else{
    print(i+1,n);
    cout<<i<<endl;
 }
 
}
int main(){
    print(1,10);
    return 0;
}