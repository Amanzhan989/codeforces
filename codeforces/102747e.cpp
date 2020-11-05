//  Author: Terence Tao 
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define sz(v) (int)v.size()
#define be(v) v.begin(),v.end()
#define f first
#define s second
#define ffor(i,a,b) for (int i = (a); i < (b); i++)
#define ffore(i,a,b) for (int i = (a-1); i >= (b); i--)
 
using namespace std;
using ll = long long;
using dd = double;
typedef pair<int, int> II;
typedef pair<II, int> III;
typedef vector<int> vI;
typedef vector<pair<int,int>> vII;
typedef vector<pair<pair<int,int>,int>> vIII;
const int N= (int)1e5+7;
bool solve(int n){
    int cnt=0;
    while(n!=0){
        cnt+=n%10;
        n=n/10;
    }
    return cnt%2!=0;
}
int main() {
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
 
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for (int i = n ; i<=m;i++ ){
        if (solve(i))   cnt++;
    }
    cout<<cnt;
 
    return 0;
}