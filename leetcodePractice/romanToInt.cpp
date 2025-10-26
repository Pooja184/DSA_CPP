#include<iostream>
#include <string>
using namespace std;


int romanTOIntConversion(string str){
//    int I=1;
//    int V=5;
//    int X=10;
//    int L=50;
//    int c=100;
//    int D=500;
//    int M=1000;
int ans=0;
   for(int i=0;i<str.size();i++){
    // cout<<str[i];
    if(str[i] == 'I'){
        ans+=1;
    }else if(str[i] == 'V'){
        ans+=5;
    }else if(str[i]=='X'){
        ans+=10;
    }else if(str[i]=='L'){
        ans+=50;
    }else if(str[i]=='C'){
        ans+=100;
    }else if(str[i]=='D'){
        ans+=500;
    }else if(str[i]=='M'){
        ans+=1000;
    }
   }
   return ans;
}

int main(){
    string num="XIVI";
    cout<<romanTOIntConversion(num);
    // romanTOIntConversion(num);
    return 0;
}