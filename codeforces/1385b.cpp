#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> v;
    while (t--)
    {
        int n;
        cin>>n;
        for(int i = 0; i < 2*n; i++){
            int a;
            bool ok = true;
            cin>>a;
            if(i==0){
                v.push_back(a);
            }
            else{
                for(int i = 0; i <v.size();i++){
                    if(a==v[i])
                        ok = false;
                }if(ok) v.push_back(a);
            }
        }
        for(int i = 0; i < v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    
}