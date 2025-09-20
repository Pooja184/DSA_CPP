#include<iostream>
using namespace std;

int main(){
    int num=6;
    bool isPrime=true;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
           isPrime=false;
           break;
        }else{
            isPrime=true;
        }
    }
    if(isPrime){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
    return 0;
}