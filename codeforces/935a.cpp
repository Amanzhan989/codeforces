#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==2)
        cout<<1;
    else{
        int k = n/2;
        int cnt = 1;
        for(int i = k-1;i>1;i--){
            if((n-i)%i==0)
                cnt++;
        }if(n%2==0) cout<<cnt+1;
        else cout<<cnt;
    }
}