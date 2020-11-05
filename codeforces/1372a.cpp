#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            for(int i = 0; i < n; i=i+2)
                    cout<<i+1<<" "<<i+1<<" ";
                cout<<endl;
            }
        else{
            for(int i = 0; i < n-1; i=i+2)
                    cout<<i+1<<" "<<i+1<<" ";
                cout<<n<<endl;
            }
        }
    }
