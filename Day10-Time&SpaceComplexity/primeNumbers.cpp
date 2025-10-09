#include<iostream>
using namespace std;


void primeNumbers(int num){
    bool primeN=true;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            primeN=false;
            break;
        }
    }
    // cout<<"Prime";
    if(primeN){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
}
int main(){
    int num=3;
    primeNumbers(num);
    return 0;
}