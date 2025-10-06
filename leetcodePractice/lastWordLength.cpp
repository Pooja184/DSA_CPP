#include<iostream>
#include <string>
using namespace std;


int lengthOfLastWord(string s){
    int count=0;
    int strLength=s.size()-1;
    bool started=false;
    for(int i=strLength;i>=0;i--){
        if(s[i] != ' '){
            started=true;
            count++;
        }else if(started){
            break;
        }
        
    }
    return count;
   
}

int main(){
    string str="Hello World heyy  ";
    cout<<lengthOfLastWord(str);
    return 0;
}