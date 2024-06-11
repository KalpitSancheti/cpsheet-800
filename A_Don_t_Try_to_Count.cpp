/*
  _  __    _    _     ____ ___ _____   ____   ___  _   _ 
 | |/ /   / \  | |   |  _ \_ _|_   _| |  _ \ / _ \| \ | |
 | ' /   / _ \ | |   | |_) | |  | |   | | | | | | |  \| |
 | . \  / ___ \| |___|  __/| |  | |   | |_| | |_| | |\  |
 |_|\_\/_/   \_\_____|_|  |___| |_|   |____/ \___/|_| \_|
*/
                                                         
#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,m;
    cin>>n>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    int op=0;

    while(true){
        int f=0;

        for(int i=0;i<n;i++){
            if(i+m>n){
                break;

            }
            if(x.substr(i,m)==s){
                cout<<op<<endl;
                return ;
            }
        }
        op++;
        x+=x;
        n+=n;
        if(n>4*m&&op>2){
            break;
        }

    }
    cout<<-1<<endl;
    return ;



}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin>>t;
    while(t--){
        solve();
 
 
    }
    return 0;
}