#include <bits/stdc++.h>
using namespace std;
string getNextTime(string time){
    string minutes = time.substr(3,2);
    string hours = time.substr(0,2);
    int minint = stoi(minutes);
    int hrint = stoi(hours);
    if (minint<59){
        if (minint<9){
            minutes = '0'+to_string(minint+1);
        }else {
            minutes = to_string(minint+1);
        }
    }else {
        minutes = "00";
        if (hrint!=23){
            if (hrint<9){
                hours = '0'+to_string(hrint+1);
            }else {
                hours = to_string(hrint+1);
            }
        }else {
            hours = "00";
        }
    }
    return hours+":"+minutes;
}
bool check(string x){
    for (int i = 0; i<=x.size()/2; ++i){
        if (x[i]!=x[x.size()-i-1])return false;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    int cnt = 0;
    while (true){
        if (check(s)){
            cout<<cnt<<endl;
            return 0;
        }
        s = getNextTime(s);
        cnt++;
    }
}
