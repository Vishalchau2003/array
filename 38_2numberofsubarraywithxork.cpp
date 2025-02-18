///*************OPTIMAL************//

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    map<int,int>mpp;
    mpp[0]=1;
    int cnt=0;
    int xor1=0;
    for(int i=0;i<n;i++){
      xor1=xor1^A[i];
      int x=xor1^B;
      cnt+=mpp[x];
      mpp[xor1]++;
      
    }
    return cnt;
}
