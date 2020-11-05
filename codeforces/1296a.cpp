#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        vector<int> v(a);
        int index = 0,cnt = 0;
        for(int i = 0; i < a;i++){
            cin>>v[i];
            if(v[i]%2==1)
                cnt++;
        }
        if(cnt==0 || (cnt==a && cnt%2==0)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        v.clear();    
    }
}