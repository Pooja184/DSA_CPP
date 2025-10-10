#include<iostream>
#include<vector>
using namespace std;


double exponential(double x, int n){
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n==0) return 1.0;
    if(x==-1 && n!=0) return -1.0;

    long bForm=n;
    if(n<0){
        x=1/x;
        bForm=-bForm;
    }
    double ans=1;
    while(bForm>0){
        if(bForm%2==1){
            ans*=x;
        }
        x*=x;
        bForm/=2;
    }
 return ans;
}
int main(){
    double x=2.00000;
    int n=10;
    cout<<exponential(x,n);
    return 0;
}