#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,bool> mp;
    int n;
    cin>>n;
    int arr[n+1];
    for (int i = 1; i<=n; ++i){
        cin>>arr[i];
    }
    for (int i = 1; i<=n; ++i){
        int j = i;
        int k = i;
        while (true){
            if (arr[j]==k && mp.size()==2){
                cout<<"YES"<<endl;
                return 0;
            }
            else {
                if (mp[j])break;
                mp[j] = true;
                j = arr[j];
            }
        }
        mp.clear();
    }
    cout<<"NO"<<endl;
}
