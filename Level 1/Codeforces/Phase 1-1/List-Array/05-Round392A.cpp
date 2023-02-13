#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
        maxi = max(arr[i],maxi);
    }
    for (int x:arr){
        ans+=abs(x-maxi);
    }
    cout<<ans<<endl;

}
