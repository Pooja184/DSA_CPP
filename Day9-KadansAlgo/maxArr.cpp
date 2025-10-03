#include<iostream>
#include<vector>
using namespace std;
int maxArr(vector<int>vec){
    int maxSum=0;
    for(int i=0;i<vec.size();i++){
        int sum=0;
        for(int j=i;j<vec.size();j++){
            sum+=vec[j];
            maxSum=max(sum,maxSum);
        }
    }
    return maxSum;
}

int main(){
    vector<int>vec={3,-4,5,4,-1,7,-8};
    cout<<maxArr(vec);
    return 0;
}

