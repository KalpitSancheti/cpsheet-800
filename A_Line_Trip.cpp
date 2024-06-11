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
    int x;
    cin>>x;
    
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int mx=0;
    mx=arr[0];
    for(int i=0;i<n-1;i++){
        mx=max(mx,arr[i+1]-arr[i]);

    }
    mx=max(mx,2*(x-arr[n-1]));
    cout << mx  << "\n";
    


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