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
    sort(arr,arr+n);
    if(st.size()==1){
        cout<<-1<<endl;
        return ;

    }
    int x=arr[n-1];
    vector<int> a,b;
    for(int i=0;i<n;i++){
        if(arr[i]==x) b.push_back(arr[i]);
        else a.push_back(arr[i]);
    }
    cout<<a.size()<<" "<<b.size()<<endl;
    for(auto item : a){
        cout << item << " ";
    }
    cout << "\n";
    for(auto item : b){
        cout << item << " ";
    }
    cout << "\n";
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