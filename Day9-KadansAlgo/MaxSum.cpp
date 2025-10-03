#include<iostream>
#include<vector>
using namespace std;

int maxSubArr(vector<int>vec,int range){
    int maxSum=0;
    for(int i=0;i<=vec.size()-range;i++){
        int sum=0;
        for(int j=i;j<i+range;j++){
            sum+=vec[j];
        }
       maxSum= max(sum,maxSum);
    }
    return maxSum;
}

int main(){
    vector<int>vec={1,2,3,4,5};
    int range=3;
    cout<<maxSubArr(vec,range);
    return 0;
}