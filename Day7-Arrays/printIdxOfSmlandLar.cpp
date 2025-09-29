#include<iostream>
using namespace std;

int main(){
    int size=5;
    int arr[size]={45,2,67,82,15};
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int idxSmall=0;
    int idxLarge=0;
    for(int i=0;i<size;i++){
      if(arr[i]<smallest){
        smallest=arr[i];
        idxSmall=i;
        // cout<<i;
      }
      if(arr[i]>largest){
        largest=arr[i];
        idxLarge=i;
      }

    }
    cout<<"Smallest: "<<idxSmall<<endl;
    cout<<"Largest: "<<idxLarge<<endl;


}