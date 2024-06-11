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
    while(true){
        int f=0;

        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
                swap(arr[i],arr[i+1]);
                f=1;
                break;


            }

        }
        if(f==1) continue;
        else break;
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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