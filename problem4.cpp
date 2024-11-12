//
// Created by Sirojbek on 11/12/2024.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0,t=0;
    char empty;
    vector<char> v;
    while(empty!='!') {
        cin>>empty;
        v.push_back(empty);
        t++;
    }
    for(int i=0;i<t;i++) {
        if(v[i-1]=='0' && '0'==v[i+1]) {
            v[i]='1';
            sum++;
        }
    }
    if(sum>=n) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }


    return 0;
}
