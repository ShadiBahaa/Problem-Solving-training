#include <bits/stdc++.h>
using namespace std;
int main(){
    int first = -1;
    int second = -1;
    int ans = INT_MAX;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; ++i)cin>>arr[i];
    for (int i = 1; i<n; ++i){
        if (abs(arr[i]-arr[i-1])<ans){
            first = i;
            second = i+1;
            ans = abs(arr[i]-arr[i-1]);
        }
    }
    if (abs(arr[0]-arr[n-1])<ans){
        first = 1;
        second = n;
        ans = abs(arr[0]-arr[n-1]);
    }
    cout<<first<<" "<<second<<endl;
}
