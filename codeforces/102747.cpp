#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    if(n*-1==k && n < 0){
        cout<<1;
        exit(0);
    }
    if(n*-1==k && k < 0){
        cout<<-1;
        exit(0);
    }
    if(n > 0 && k > 0){
        cout<<n+k;
    }
    if(n <0 && k < 0){
        cout<<n+k;
    }
    if(n > 0 && k <0){
        int l = n+k;
        if(l < 0)
            cout<<l-1;
        else
            cout<<l;
    }
    if(n < 0 && k > 0){
        int d = n+k;
        if(d>0)
            cout<<d+1;
        else
            cout<<d;
    }
}