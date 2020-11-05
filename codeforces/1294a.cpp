#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        if(a>=b && a>=c && (n-((a-b)+(a-c)))>=0 && (n-((a-b)+(a-c)))%3==0)
            cout<<"YES"<<endl;
        else if(b>=a && b>=c && (n-((b-a)+(b-c)))>=0 && (n-((b-a)+(b-c)))%3==0)
            cout<<"YES"<<endl;
        else if(c>=a && c>=b && (n-((c-a)+(c-b)))>=0 && (n-((c-a)+(c-b)))%3==0)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;

    }
}