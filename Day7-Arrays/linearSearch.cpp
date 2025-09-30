#include<iostream>
using namespace std;


int linearSearchAlgo(int arr[],int target,int size){
  
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
   return -1;
    
}
int main(){
    int size=5;
    int arr[size]={3,7,1,8,4};
    int target=8;
    cout<<linearSearchAlgo(arr,target,size);
    return 0;
}