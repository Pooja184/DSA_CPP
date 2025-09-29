#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num=32;
    bool isFound=false;
    for(int i=1;i<=32;i++){
        if(pow(2,i)==num){
            isFound=true;
            break;
        }
    }
    if(isFound){
        cout<<true;
    }else{
        cout<<false;
    }
    return 0;
}