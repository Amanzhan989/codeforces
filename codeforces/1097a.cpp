#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool ok = false;
    for(int i = 0; i < 5;i++){
        string s1;
        cin>>s1;
        if(s[0]==s1[0] || s[1]==s1[1])
            ok = true;
    }if(ok== true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}