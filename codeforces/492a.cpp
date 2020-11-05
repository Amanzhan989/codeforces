#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int k = 1,n = 1;
    while(a>0){
        a-=n*(n+1)/2;
        if(a>=(n+1)*(n+2)/2){    
            n++;
            k++;
        }
    }
    cout<<k;
}