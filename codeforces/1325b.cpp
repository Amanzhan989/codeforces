#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        vector<int> v(a);
        for(int i = 0; i < a;i++)
            cin>>v[i];
        sort(v.begin(),v.end());
        int cnt = 0;
        for(int i = 0; i < a-1;i++){
            if(v[i]==v[i+1])
                cnt++;
        }
        cout<<v.size()-cnt<<endl;
        v.clear();
    }
}