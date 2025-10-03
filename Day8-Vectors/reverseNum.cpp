#include<iostream>
#include<vector>
using namespace std;

void reverseNum(vector<int>& vec){
    int i=0;
    int j=vec.size()-1;
    while(i<j){
        swap(vec[i],vec[j]);
        i++;
        j--;
    }

}

int main(){
    vector<int> vec={1,2,3,4,5,6};
    reverseNum(vec);
    for(int val:vec){
        cout<<val<<endl;
    }
    return 0;
}