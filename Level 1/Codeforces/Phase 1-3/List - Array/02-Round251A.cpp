#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    int sum = 0;
    sum = accumulate(arr,arr+n,sum)+10*(n-1);
    if (sum>d){
        cout<<-1<<endl;
    }else {
        cout<<(n-1)*2 + (d-sum)/5<<endl;
    }
}
