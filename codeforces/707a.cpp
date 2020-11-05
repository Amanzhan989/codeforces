#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s[n][m];
    bool ok = false;
    for(int i = 0;i < n;i++){
        for(int j =0;j < m;j++){
            cin>>s[i][j];
            if(s[i][j]=="C" || s[i][j]=="Y" || s[i][j]=="M")
                ok = true;
        }
    }if(ok==true) cout<<"#Color";
    else cout<<"#Black&White";
}