#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long summ = 0;
    string s;
    cin>>s;
    for(int i =0; i < s.size();i++){
        if(s[i]=='1')
            summ+=a;
        if(s[i]=='2')
            summ+=b;
        if(s[i]=='3')
            summ+=c;
        if(s[i]=='4')
            summ+=d;
    }cout<<summ;
}