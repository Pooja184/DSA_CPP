#include<iostream>
using namespace std;

int main(){
    int range=4;
    for(int i=1;i<=range;i++){
        for(int k=1;k<i;k++){
            cout<<" "<<" ";
        }
        for(int j=range;j>=i;j--){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}