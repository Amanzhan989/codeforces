#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y,n;
        bool ok = true;
        cin>>x>>y>>n;
        if(n-n%x+y <= n)
            cout<<n-n%x+y<<endl;
        else 
            cout<<(n-n%x+y)-x<<endl;
    }
}