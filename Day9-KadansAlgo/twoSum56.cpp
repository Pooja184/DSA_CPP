#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>vec,int target){
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            int sum=0;
            sum=vec[i]+vec[j];
            if(sum==target){
                return {i,j};
            }

        }
    }
   return {};
}

int main(){
    vector<int>vec={1,7,2,15};
    int target=9;
    vector<int>ans=twoSum(vec,target);
  
     cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;
    return 0;
}

