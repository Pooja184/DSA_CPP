#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// find maximum elements in array
int maxEleBruteForce(vector<int>vec){
 int freq=0,ans=0;
 int n=vec.size();
 for(int i=0;i<n;i++){
    if(freq==0){
        ans=vec[i];
    }
    if(ans==vec[i]){
        freq++;
    }else{
        freq--;
    }
 }
 return ans;
}

int main(){
    vector<int>vec={2,1,3,1,2,2,2,3,2};
    cout<<maxEleBruteForce(vec);
    return 0;
}