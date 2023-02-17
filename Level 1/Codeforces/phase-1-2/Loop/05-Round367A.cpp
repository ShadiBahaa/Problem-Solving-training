#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    double ans = DBL_MAX;
    while (n--){
        double x,y,v;
        cin>>x>>y>>v;
        double dis = (a-x)*(a-x)+(b-y)*(b-y);
        dis = sqrt(dis);
        double tmp = dis/v;
        ans = min(ans,tmp);
    }
    cout<<fixed<<setprecision(20)<<ans<<endl;
}
