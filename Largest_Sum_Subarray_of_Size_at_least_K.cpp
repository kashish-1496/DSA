#include<bits/stdc++.h>
using namespace std;
long long int maxSumWithK(vector<int>a, long long int n, long long int k){
        if(n == 1) return a[0];
        int i=0,maxi=INT_MIN;
        int j;
        while(i<n){
            j = i;
            int sum = 0;
            while(j<n){
               sum += a[j];
               if(j-i+1 >= k && sum>maxi){
                   maxi = sum;
               }
               j++;
        
            i++;
        }
        return maxi;
    }
}

int main(){
    int n;
    cin>>n;
    int val;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>val;
        a.push_back(val);
    }
    int k;
    cin>>k;
    long long ans = maxSumWithK(a,n,k); 
    cout<<ans;
    return 0;

}