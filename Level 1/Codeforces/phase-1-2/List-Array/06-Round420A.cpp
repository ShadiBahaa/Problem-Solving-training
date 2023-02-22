#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<n; ++j){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<n; ++j){
            if (arr[i][j]==1)continue;
            int val = arr[i][j];
            set<int> tmp;
            for (int k = 0; k<n; ++k){
                if (k==j)continue;
                tmp.insert(arr[i][k]);
            }
            bool found = false;
            for (int k = 0; k<n; ++k){
                if (k==i)continue;
                if (tmp.count(val-arr[k][j])){
                    found = true;
                    break;
                }
            }
            if (!found){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
}
