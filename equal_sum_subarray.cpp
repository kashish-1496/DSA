#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val;
    cout<<"Enter no.of elements: ";
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    int left_sum = 0,right_sum =0;
    int i=0,j=0;
    vector<int> first , second ;
    // [ , , , , ,..........., ]
    while(i<n){
        left_sum += v[i];
        j = i+1;
        while(j<n){
            right_sum += v[j];
            j++;
        }
        if(left_sum == right_sum){
            for(int k=0;k<=i;k++){
                first.push_back(v[k]);
            }
            for(int l=i+1;l<n;l++){
                second.push_back(v[l]);
            }
        }
        right_sum = 0;
        i++;
    }
    cout<<first.size()<<" , "<<second.size()<<'\n';
    if(!first.size() && !second.size()){ cout<<"Not Posssible"; return 0;}
    for(auto it:first){cout<<it<<"->";}
    cout<<'\n';
    for(auto it:second){cout<<it<<"->";}

    return 0;
}
// testcases
// 1 2 3 4 5 5 {1,2,3,4}{5,5}
// 4 1 2 3 {4 1}{2 3}
// 4 3 2 1{not possible}