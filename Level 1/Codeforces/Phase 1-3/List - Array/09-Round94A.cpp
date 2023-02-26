#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int total = 0;
    int cnt = 0;
    int arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
        total+=arr[i];
    }
    for (int i = 0; i<n; ++i){
        if (total%2 && arr[i]%2){
            cnt++;
        }else if (total%2==0 && arr[i]%2==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
