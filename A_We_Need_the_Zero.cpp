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
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int x=0;
    for(auto it:arr){
        x^=it;
    }
    if(n%2==1){
        cout<<x<<endl;
        return ;
    }
    else{
        if(x==0){
            cout<<7<<endl;
            return ;
        }
        else{
            cout<<-1<<endl;
            return;
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