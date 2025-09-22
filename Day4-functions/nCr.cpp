#include<iostream>
using namespace std;

int factorial(int n){
    // int factN=1;
    // int factR=1;
    // int NR=n-r;
    // int factNR=1;
    // int result=0;
    // for(int i=1;i<=n;i++){
    //     factN*=i;
    // }
    // for(int j=1;j<=r;j++){
    //     factR*=j;
    // }
    // for(int i=1;i<=NR;i++){
    //     factNR*=i;
    // }
    // result=factN/(factR*factNR);
    // return result;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n,int r){
    int factN=factorial(n);
    int factR=factorial(r);
    int factNR=factorial(n-r);
    int result=factN/(factR*factNR);
    return result;
}
int main(){
    int n=6, r=3;
    cout<<nCr(n,r);
    return 0;
}