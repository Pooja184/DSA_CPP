#include<iostream>
using namespace std;


int sumOfNumbers(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<"Sum is "<<sumOfNumbers(5);
    return 0;
}