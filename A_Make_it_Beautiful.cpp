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
    set<int> st;

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        st.insert(arr[i]);
    }
    if(st.size()==1){
        cout<<"NO"<<endl;
        return ;
    }
    sort(arr,arr+n);
    cout<<"YES"<<endl;
    cout<<arr[n-1]<<" ";
    for(int i = 0; i < n-1; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

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