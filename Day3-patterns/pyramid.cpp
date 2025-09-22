#include<iostream>
using namespace std;

int main(){
    int range=4;
    for(int i=1;i<=range;i++){
       for(int k=i;k<range;k++){
        cout<<" "<<" ";
       }
       for(int j=1;j<=i;j++){
        cout<<j<<" ";
       }
       for(int j=i;j>1;j--){
           cout<<j-1<<" ";
        }
        // for(int k=i;k<=range;k++){
        //     cout<<" "<<" ";
        // }
        cout<<"\n";

    }

    return 0;
}