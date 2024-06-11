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
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cout << "YES"  << "\n";
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return ;
    }
    if(n%2==0){
        if(k<2){
            cout << "NO"  << "\n";
            return ;
        }
        cout << "YES"  << "\n";
        cout<<n/2<<endl;
        for(int i = 0; i < n/2; ++i){
            cout<<2<<" ";

            
        }
        cout<<endl;
    }
    if(n%2==1){
        if(k<3){
            cout << "NO"  << "\n";
            return ;
        }
        int sum=n-3;
        if(sum<0){
            cout << "NO"  << "\n";
            return ;
        }
        cout << "YES"  << "\n";
        cout<<(sum/2)+1<<endl;
        cout<<3<<" ";
        for(int i=0;i<sum/2;i++){
            cout<<2<<" ";
        }
        cout<<endl;

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