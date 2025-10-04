#include<iostream>
#include<vector>
using namespace std;

int maxEleBruteForce(vector<int>vec){
    for(int val:vec){
        int freq=0;
        for(int el:vec){
            if(val==el){
                freq++;
            }
        }
        if(freq>vec.size()/2){
            return val;
        }
    }
    return 0;
}

int main(){
    vector<int>vec={2,1,2,2,2,1};
    cout<<maxEleBruteForce(vec);
    return 0;
}