#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int d;
    int cnt1 = 0;
    vector <int> v;
    for(int i = 1;i <= k;i++){
        cin>>d;
        if(d==1)
            v.push_back(i);
            cnt1++;
    }
    int g = v[v.size()-1]-v[0];
    int cnt = 1;
    while(n <= g){
        n*=2;
        cnt++;
        if(cnt >= cnt1){
            cout<<cnt1;
            exit(0);
        }
    }
    cout<<cnt;
    
}