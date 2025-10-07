#include<iostream>
using namespace std;


void primeNumbers(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            cout<<"Not Prime";
            break;
        }
    }
    cout<<"Prime";
}
int main(){
    int num=7;
    primeNumbers(num);
    return 0;
}