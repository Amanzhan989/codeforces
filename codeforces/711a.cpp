#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,cnt = 0;
    cin>>t;
    vector <string> v;
    int index = -1;
    int index1 = 0;
    bool ok = true;
    bool ok1 = true;
    while (t--)
    {
        string s;
        cin>>s;
        v.push_back(s);
        index++;
        for(int i = 0; i < 4;i++){
            if(s[i]=='O' && s[i+1]=='O' && cnt==0 && i==0 && ok == true){
                cnt++;
                ok1 = false;
                index1 = index;
                break;
            }
            else if(s[i]=='O' && s[i+1]=='O' && cnt==0 && i==3 && ok1==true){
                cnt++;
                ok = false;
                index1 = index;
                break;
            }
        }
    }
    if(cnt==0){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        for(int i = 0; i < v.size();i++)
            if(ok1==false && i==index1){
                string s1 = v[i];
                cout<<"++|"<<s1[3]<<s1[4]<<endl;
                ok1 = true;
            }
            else if(ok == false && i==index1 ){
                string s2 = v[i];
                cout<<s2[0]<<s2[1]<<"|++"<<endl;
                ok = true;
            }      
            else 
                cout<<v[i]<<endl;
    }
    
}
