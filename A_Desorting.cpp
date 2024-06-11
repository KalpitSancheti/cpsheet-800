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
    int mn=INT_MAX;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; ++i){
        int diff=arr[i+1]-arr[i];
        if(diff%2==0) diff++;
        
        mn=min((diff+1)/2,mn);
        
    }
    cout << max(0ll,mn)  << "\n";
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