#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long s = n*m;
        if(s%2==0)
            cout<<s/2<<endl;
        else 
            cout<<s/2+1<<endl;
    }
}