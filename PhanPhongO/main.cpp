#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max)max=a[i];
    }
    int ans=0;
    for(int i=n;i<=max;i++){
        bool check[i];
        bool flag=true;
        for(int j=0;j<n;j++){
            if(!check[a[j]%i]) check[a[j]%i]=true;
            else{flag=false;break;}
        }
        if(flag==true){ans=i;break;}
    }
    cout<<ans;
    return 0;
}
