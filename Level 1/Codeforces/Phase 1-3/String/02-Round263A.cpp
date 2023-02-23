#include <bits/stdc++.h>
using namespace std;
int n;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
bool check(int i, int j){
    return i>=0 && i<n && j>=0 && j<n;
}
int main(){
    cin>>n;
    string arr[n];
    for (int i = 0; i<n; ++i)cin>>arr[i];
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<n; ++j){
            int cnt = 0;
            for (int k = 0; k<4; ++k){
                if (check(i+dx[k],j+dy[k])){
                    if (arr[i+dx[k]][j+dy[k]]=='o')cnt++;
                }
            }
            if (cnt%2){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
}
