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
    int cnt=0;
    int two=0;
    int arr[n];


    for(int i = 0; i < n; ++i){
        int x;
        cin>>x;
        arr[i]=x;

        if(x==2) two++;
    }
    for(int i = 0; i < n; ++i){
        if(arr[i]==2) cnt++;
        if(2*cnt==two){
            cout<<i+1<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
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