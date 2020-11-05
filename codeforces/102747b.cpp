#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b==0){
        cout<<0;
        exit(0);
    }
    int cnt = 0;
    while(a>=0 && b>=0 && c>=0){
        a-=1;
        cnt++;
        b-=1;
        cnt++;
        c-=1;
        cnt++;
        b-=1;
        cnt++;
    }cout<<cnt-1;
}