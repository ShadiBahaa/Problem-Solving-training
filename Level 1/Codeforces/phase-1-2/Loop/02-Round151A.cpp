#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> c(n);
    for (int i = 0; i<n; ++i){arr[i] = n-i; c[i] = i+1;}
    vector<int> to_print = arr;
    for (int i = 0; i<=n-2; ++i){
        for (int j = i; j<=n-2; ++j){
            if (arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
    if (arr==c){
        cout<<-1<<endl;
    }else {
        for (int x:to_print)cout<<x<<" ";
        cout<<endl;
    }
}
