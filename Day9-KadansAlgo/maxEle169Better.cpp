#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxEleBruteForce(vector<int>vec){
   int n=vec.size();
   sort(vec.begin(),vec.end());
   int freq=1, ans=vec[0];
   for(int i=1;i<n;i++){
        if(vec[i]==vec[i-1]){
            freq++;
        }else{
            freq=1;
            ans=vec[i];
        }
        if(freq>n/2){
            return ans;
        }
   }
   return -1;
}

int main(){
    vector<int>vec={2,1,3,1,2,2,2,3,2};
    cout<<maxEleBruteForce(vec);
    return 0;
}