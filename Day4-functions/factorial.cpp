#include<iostream>
using namespace std;


int factorialOfNum(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int main(){

    cout<<factorialOfNum(5);
    return 0;
}