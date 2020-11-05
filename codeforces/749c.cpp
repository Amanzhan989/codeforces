#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    deque <int> d;
    deque <int> r;
    for(int i = 0; i < n;i++){
        if(s[i]=='D')
            d.push_back(i+1);
        else
            r.push_back(i+1);
    }
    while(!d.empty() && !r.empty()){
        if(d.front()<r.front()){
            d.push_back(d.front()+n);
            d.pop_front();
            r.pop_front();
        }
        else{
            r.push_back(r.front()+n);
            r.pop_front();
            d.pop_front();
        }
    }if(d.empty())
        cout<<"R";
    else
    {
        cout<<"D";
    }
    
}