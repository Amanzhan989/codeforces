#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int mini1 = 1000000000,mini2 = 1000000000;
        long long cnt = 0;
        long long n;
        cin>>n; 
        vector <long long> a(n);
        vector <long long> b(n);
        for(int i = 0;i < n;i++){
            cin>>a[i];
            if(a[i]<mini1)
                mini1 = a[i];
        }
        for(int j = 0; j < n;j++){
            cin>>b[j];
            if(b[j]<mini2)
                mini2 = b[j];
        }
        for(int i = 0; i < n;i++){
            if(a[i]!=mini1 && b[i]!=mini2){
                int k = min((a[i]-mini1),(b[i]-mini2));
                cnt+=k;
                a[i]-=k;
                b[i]-=k;
            }
            if(a[i]!=mini1 && b[i]==mini2){
                cnt+=(a[i]-mini1);
                a[i] = mini1;
            }
            if(b[i]!=mini2 && a[i]==mini1){
                cnt+=(b[i]-mini2);
                b[i] = mini2;
            }
        }
    cout<<cnt<<endl;
    a.clear();
    b.clear();
    t--;
    }
}