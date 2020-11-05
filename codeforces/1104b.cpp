#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt = 1;
    string s;
    cin>>s;
    stack <char> st;
    for(int i = 0;i < s.size();i++){
        if(!st.empty() && st.top()==s[i]){
            st.pop();
            cnt = 3 - cnt;
        }
        else
        {
            st.push(s[i]);
            
        }
    }
    if(cnt == 1)
        cout<<"No";
    else
    {
        cout<<"Yes";
    }
    
  
}