#include<iostream>
using namespace std;

int sumOfDigit(int num){
    int sum=0;
    while(num>0){
        int rem=num%10;
        sum+=rem;
        num/=10;
    }
    return sum;
}

int main(){
    cout<<sumOfDigit(2356);
}