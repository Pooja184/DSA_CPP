#include<iostream>
#include<vector>
using namespace std;

// only works when array is sorted
vector<int> twoSum(vector<int>vec,int target){
    int i=0;
    int j=vec.size()-1;
    vector<int>ans;
    while(i<j){
        int sum=vec[i]+vec[j];
        if(sum==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }else if(sum>target){
            j--;
        }else if(sum<target){
            i++;
        }
    }
    return ans;
}

int main(){
    vector<int>vec={1,3,7,15};
    int target=18;
    vector<int>ans=twoSum(vec,target);
  
     cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;
    return 0;
}

