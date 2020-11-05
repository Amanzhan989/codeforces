#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a = 2;
        int y = 0;
        int n,k;
        cin>>n>>k;
        while(a<n){
            a+=k;
            y++;
        }
        cout<<y+1<<endl;;
    }
    
}