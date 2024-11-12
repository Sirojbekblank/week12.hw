//
// Created by Sirojbek on 11/12/2024.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
    char empty;
    vector<char> v;
    while(cin>>empty && empty!='!') {
        v.push_back(empty);
    }
    int t =v.size();
    if(v[1]=='0' && v[0]=='0') {
        v[0]='1';
        sum++;
    }
    for(int i=1;i<t-1;i++) {
        if(v[i-1]=='0' && v[i]=='0' && '0'==v[i+1]) {
            v[i]='1';
            sum++;
        }
    }
    if(v[t-2]=='0' && v[t-1]=='0') {
        v[t-1]='1';
        sum++;
    }
    if(sum>=n) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    cout<<sum;


    return 0;
}
