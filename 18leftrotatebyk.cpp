#include<bits/stdc++.h>
using namespace std;
void rotateleft(int arr[100],int k,int n){
if(n==0){
    return;
}
k=k%n;
if(k==0){
    return;

}
else{
    int temp[k];
    for(int i=0;i<k;i++){
temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
arr[i-k]=arr[i];
    }
    int j=0;
    for(int i=n-k;i<n;i++){
        if(j<k){
        arr[i]=temp[j];
        j++;
        }
    }
}
}
int main(){
int n=7;
int arr[7]={1,2,3,4,5,6,7};
int k=3;
cout<<"before rotating"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
rotateleft(arr,k,n);
cout<<"after rotating"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}