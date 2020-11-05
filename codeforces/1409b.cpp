#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
            if(b <= a && b-n >= y){
                cout<<(b-n)*a<<endl;
            }
            else if(a < b && a-n>=x){
                cout<<(a-n)*b<<endl;
            }
            else if(a==b && x >= y && (b-n)>=y){
                cout<<(b-n)*a<<endl;
            }
            else if(a==b && x < y && (a-n)>=x){
                cout<<(a-n)*b<<endl;
            }
            else{
                while(n>0){
                    if(a<b){
                        while(a>x){
                            a--;
                            n--;
                        }
                        if(n!=0){
                            while(b>y){
                            n--;
                            b--;
                            }
                        }
                    }
                    else{
                        while(b>y){
                            b--;
                            n--;
                        }
                        if(n!=0){
                            while(a>x){
                            a--;
                            n--;
                            }
                        }
                    }
                }
            cout<<a*b<<endl;
            }
        }
}