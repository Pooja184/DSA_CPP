#include<iostream>
using namespace std;

int main(){
    int range=4;
    // for(int i=1;i<=range;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<"\n";
    // }
    for(int i=1;i<=range;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}