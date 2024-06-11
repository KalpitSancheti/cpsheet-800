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
    if(mp.size()>2){
        cout << "NO"  << "\n";
        return ;
    }
    if(mp.size()==1){
        cout << "YES"  << "\n";
        return ;
    }
    if(n%2==0){
        int a=-1;
        int b=-1;

        for(auto it:mp){
            if(a==-1){
                a=it.second;
            }
            else{
                b=it.second;
            }

        }
        if(b!=a) cout << "NO"  << "\n";
        else cout << "YES"  << "\n";
        
    }
    if(n%2==1){
        int a=-1;
        int b=-1;

        for(auto it:mp){
            if(a==-1){
                a=it.second;
            }
            else{
                b=it.second;
            }

        }
        if(abs(b-a)==1) cout << "YES"  << "\n";
        else cout << "NO"  << "\n";
        
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