#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> num;
    string c;
    cin>>c;
    for (int i = 0; i<n;i++){
        int b;
        cin>>b;
        num.push_back(b);
    }
    int mini = 1e9;
    for (int i = 0; i<n-1; i++){
        if (c[i]=='R' && c[i+1]=='L'){
            int c = (num[i+1]-num[i])/2;
            if (c<mini){
                mini = c;
            }
        }
    }
    if (mini != 1e9){
        cout<<mini<<endl;
        return 0;
    }
    cout<<-1<<endl;
}
