#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n,k,max = 0;
    cin>>n;
    int a[100]={0};
    for(int i = 0;i<n;i++){
        cin>>k;
        a[k]++;
    }
    for(int i = 0;i<10;i++){
            cout<<a[i]<<" ";
    }
    for(int i = 0;i<n-1;i++){
        if(a[i]+a[i+1]> max) max = a[i]+a[i+1];
    }
    cout<<"\n"<<max;
    return 0;
}
