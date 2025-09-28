#include<iostream>
using namespace std;

int binaryTodecimalConversion(int num){
    int power=1;
    int ans=0;
    while(num>0){
      int rem=num%10;
      cout<<rem;
      ans+=rem*power;
      num/=10;
      power*=2;
    }
    return ans;
}

int main(){
    int binaryNumber=101010;
    cout<<binaryTodecimalConversion(binaryNumber);
}