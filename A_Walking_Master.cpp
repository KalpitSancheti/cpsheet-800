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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int diffy=d-b;
    if(diffy<0){
        cout<<-1<<endl;
        return ;

    }
    int x=(diffy-c+a);
    if(x<0){
        cout<<-1<<endl;
        return ;
    }
    a-=(diffy-c+a);
    
    //cout<<x<<endl;
    if(c-a==d-b){
        cout<<x+(c-a)<<endl;
        return ;
    }
    else {
        cout<<-1<<endl;
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