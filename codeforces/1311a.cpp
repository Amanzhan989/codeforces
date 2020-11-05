#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int s = a-b;
        if(s==0)
            cout<<0<<endl;
        else if(s<0 && abs(s)%2==1)
            cout<<1<<endl;
        else if(s>0 && s%2==0)
            cout<<1<<endl;
        else 
            cout<<2<<endl;
    }
}