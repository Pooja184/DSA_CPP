#include<iostream>
using namespace std;
// hallow diamond
int main(){
    int range=4;
    for(int i=1;i<=range;i++){
        for(int k=i;k<range;k++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j>1){
                cout<<" "<<" ";
            }else{
            cout<<"*"<<" ";
            }
        }
        for(int j=i;j>1;j--){
           
            if(j==2){
                cout<<"*"<<" ";
            }else{
                cout<<" "<<" ";
            }
            
        }
        cout<<"\n";
    }
    for(int i=1;i<range;i++){
        for(int k=1;k<=i;k++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1){

                cout<<"*"<<" ";
            }else{
                cout<<" "<<" ";
            }
          
            
        }
        cout<<"\n";
    }
}