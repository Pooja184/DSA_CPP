#include<iostream>
using namespace std;

int main(){
    int size=5;
    int arr[size]={56,23,98,67,34};
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        // if(arr[i]<smallest){
        //     smallest=arr[i];
        // }

        // here we can also use min function which is implicit 
       smallest= min(arr[i],smallest);
    }
    cout<<smallest;

    
    return 0;
}