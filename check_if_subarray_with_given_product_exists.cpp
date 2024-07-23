#include<bits/stdc++.h>
using namespace std;
bool if_exists(vector<int> &v,int n,int k){
    int i=0;
    while(i<n){
        int mul=1;
        int j=i;
        while(j<n){
            mul *= v[j];
            if(mul==k)  return true;
            if(mul==0)  break;
            j++;
        }
        i++;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<int>v;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    int k;
    cin>>k;
    bool ans = if_exists(v,n,k);
    if(ans) cout<<"Exists";
    else cout<<"Not Exists";
    return 0;
}