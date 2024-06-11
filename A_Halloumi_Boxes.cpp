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
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    if(k>1){
        cout << "YES"  << "\n";
        return ;
    }
    int v[n];
    for(int i=0;i<n;i++) v[i]=arr[i];
    sort(v,v+n);
    for(int i=0;i<n;i++){
        if(v[i]!=arr[i]){
            cout << "NO"  << "\n";
            return ;
            
        }
    }
    
    cout << "YES"  << "\n";
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