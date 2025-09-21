#include<iostream>
using namespace std;

int main(){
    int range=4;
    int num=1;
    for(int i=1;i<=range;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";

    }
    return 0;
}