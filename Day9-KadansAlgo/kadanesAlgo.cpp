#include<iostream>
#include<vector>
using namespace std;
int maxArr(vector<int>vec){
   int currSum=0,maxSum=INT_MIN;
   for(int i=0;i<vec.size();i++){
    currSum+=vec[i];
    maxSum=max(currSum,maxSum);
    if(currSum<0){
        currSum=0;
    }
   }
   return maxSum;
}

int main(){
    vector<int>vec={3,-4,5,4,-1,7,-8};
    cout<<maxArr(vec);
    return 0;
}

