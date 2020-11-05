#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a%4==0)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}