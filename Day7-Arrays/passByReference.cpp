#include<iostream>
using namespace std;

void example(int arr[],int size){
    cout<<"before\n";
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*2;
    }
}

int main(){

    int size=4;
    int arr[size]={1,2,4,6};
    example(arr,size);
    cout<<"After\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}