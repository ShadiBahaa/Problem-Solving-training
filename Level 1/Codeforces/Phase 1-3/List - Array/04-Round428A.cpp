#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int total = 0;
    int cnt = 0;
    for (int i = 0; i<n; ++i){
        int x;
        cin>>x;
        total+=x;
        int mini = min(total,8);
        total-=mini;
        k-=mini;
        cnt++;
        if (k<=0)break;
    }
    if (k>0){
        cout<<-1<<endl;
    }else {
        cout<<cnt<<endl;
    }
}
