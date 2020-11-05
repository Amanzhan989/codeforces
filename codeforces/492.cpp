#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    vector <long long> a(n);
    vector <long long> v;
    for(int i = 0; i < n;i++){
        cin>>a[i];
    }   
    if(n==1){
        if(a[0]>k-a[0])
            cout<<a[0];
        else
        {
            cout<<k-a[0];
        }
        
    }
    else{
        sort(a.begin(),a.end());
        for(int i = 0; i < a.size()-1;i++){
            v.push_back(a[i+1]-a[i]);
        }
        sort(v.begin(),v.end());
        long double g = v[v.size()-1];
        long double first = a[0];
        long double endd = k-a[a.size()-1];
        if(g/2>first && g/2>endd) 
            cout<<setprecision(9)<<g/2;
        if(first >endd && first >g/2)
            cout<<setprecision(9)<<first;
        if (endd>=first && endd>=g/2)
        {
            cout<<setprecision(9)<<endd;
        }
    }   
}