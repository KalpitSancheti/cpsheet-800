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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    int streak=0;
    int f=0;

    for(int i = 0; i < n; ++i){
        if(s[i]=='#'){
            ans+=min(2ll,streak);
            if(streak>=3){
                f=1;

            }
            streak=0;
            
        }
        else{
            streak++;

        }
    }
    if(streak>2) f=1;
    
     ans+=min(2ll,streak);
     if(f==1){
        cout<<2<<endl;
        return ;
     }
     else{
        cout<<ans<<endl;
        return ;
     }

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