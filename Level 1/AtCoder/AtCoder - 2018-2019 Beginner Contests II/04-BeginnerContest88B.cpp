#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int ans = 0;
    for (int i = 0; i<n; ++i){
        if (i%2){
            ans-=arr[i];
        }else {
            ans+=arr[i];
        }
    }
    cout<<ans<<endl;
}
