#include<iostream>
using namespace std;

void uniqueElements(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i];
        }
    }

}

int main(){
    int size=5;
    int arr[size]={1,4,1,2,2};
    uniqueElements(arr,size);
    return 0;
}