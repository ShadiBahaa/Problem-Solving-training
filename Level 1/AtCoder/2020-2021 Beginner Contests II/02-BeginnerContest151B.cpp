#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m;
    cin>>n>>k>>m;
    int tot = 0;
    int want = m*n;
    int a;
    for (int i = 0; i<n-1; ++i){
        cin>>a;
        tot+=a;
    }
    if (tot>=want){
        cout<<0<<endl;
    }else if (tot+k>=want){
        cout<<want-tot<<endl;
    }else {
        cout<<-1<<endl;
    }
}
