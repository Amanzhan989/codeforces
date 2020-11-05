#include<bits/stdc++.h>
using namespace std;
int check(vector <int> &v,int x){
    int l = 0;
    int r = v.size()-1;
    while(l < r){
        int me = (l+r)/2;
 
    }
    if(v[l]==x)
        return l;
    if(v[r]==x)
        return r;
    return -1;
}
int main(){
    int n,m;
    cin>>n;
    vector <int> a(n);
    vector <int> v;
    int k = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        k+=a[i];
        v.push_back(k);
    }
    cin>>m;
    int b[m];
    for(int i = 0; i < m; i++){
        cin>>b[i];
        int index = check(v,b[i]);
        cout<<index<<endl;
    }
   
}


    

