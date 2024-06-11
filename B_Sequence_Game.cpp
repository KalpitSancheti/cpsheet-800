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
    vector<int> v;
    v.push_back(arr[0]);
    int last=arr[0];

    
    for(int i=1;i<n;i++){
        if(arr[i]>=last) {}
        else v.push_back(arr[i]);
        v.push_back(arr[i]);
        last=arr[i];

       
    }
    cout<<v.size()<<endl;
    for(auto item : v){
        cout << item << " ";
    }
    cout << "\n";
    


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