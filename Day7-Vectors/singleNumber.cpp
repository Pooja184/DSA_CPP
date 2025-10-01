#include<iostream>
#include<vector>
using namespace std;


int singleNumber(vector<int>& vec){
    int ans=0;
    for(int val :vec){
        ans=ans^val;
    }
    return ans;
}
int main(){
    vector<int> vec={2,4,1,2,1};
    cout<<singleNumber(vec);
    return 0;

}