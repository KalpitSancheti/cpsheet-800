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
    int a=0;
    int b=0;
    for(int i = 0; i < n; ++i){
        int x;
        cin>>x;
        if(x==1) a++;
        else b++;
    }
    if(a>b){
        if(b%2==0){
            cout<<0<<endl;

        }
        else{
            cout<<1<<endl;
        }
    }
    else{
        int ans=(b-a+1)/2;
        int sum=a+b;
        int mid=(a+b)/2;
        if(mid%2==0){
            cout<<ans<<endl;

        }
        else{
            cout<<ans+1<<endl;
            
        }

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