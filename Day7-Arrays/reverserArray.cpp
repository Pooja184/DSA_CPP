#include<iostream>
using namespace std;

void reverseArr(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<j){
        // here we can also use inbuilt swap function
        // swap(arr[i],arr[j]);

        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
   
}

int main(){
    int size=5;
    int arr[size]={7,3,5,9,2};
    reverseArr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}