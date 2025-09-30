#include<iostream>
using namespace std;

void intersectionOfArray(int arr1[],int arr2[],int size){
    for(int i=0;i<size;i++){
        // bool found=false;
        int found=0;
        for(int j=0;j<size;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
}

int main(){
    int size=5;
    int arr1[size]={2,5,3,7,8};
    int arr2[size]={8,6,9,2,1};
    intersectionOfArray(arr1,arr2,size);
    return 0;
}