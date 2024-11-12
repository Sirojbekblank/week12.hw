//
// Created by Sirojbek on 11/12/2024.
//
#include <iostream>
using namespace std;

int main() {
    int c,r;
    cin>>c>>r;
    int arr[c][r], sum=0;
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            cin>>arr[i][j];
            sum+=arr[i][j];
        }

    }
    if(sum==r*c*arr[0][0]) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}