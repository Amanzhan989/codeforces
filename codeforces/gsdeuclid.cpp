#include<iostream>
#include<cmath>
using namespace std;
int gsd1(int n,int k){
    if (k==0)
        return n;
    else
        return gsd1(k,n%k);
    }
int main(){
    int n,k;
    cin>>n>>k;
    int gsd = gsd1(n,k);
    cout<<gsd;
}