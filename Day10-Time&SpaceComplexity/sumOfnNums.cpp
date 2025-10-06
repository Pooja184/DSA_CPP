#include<iostream>
using namespace std;

// Sum of n numbers without using loop
// Time complexity: O(1) — uses a direct mathematical formula instead of iteration
int sumOfnNumbers(int n){
    int sum=0;
    sum=n*(n+1)/2;
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sumOfnNumbers(n);
    return 0;
}