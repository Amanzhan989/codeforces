#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cnt = 0;
    cin>>n;
    vector <int> a(n);
    for(int i = 0;i < n;i++){
        cin>>a[i];
    }
    cin>>m;
    vector <int> b(m);
    for(int i = 0;i < m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int k = b.size()-1;
    for(int i = a.size()-1; i >= 0;i--){
        for(int j = k;j >= 0;j--){
            if(abs(a[i]-b[j])<=1){
                a.pop_back();
                k =  j -1;
                cnt++;
                break;
            }
        }
    }cout<<cnt;    
}