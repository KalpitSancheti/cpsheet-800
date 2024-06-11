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
    map<int,int> mp;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(gcd(arr[i],arr[j])<=2){
                cout << "YES"  << "\n";
                return ;
            }
        }
    }
    cout << "NO"  << "\n";
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