#include<bits/stdc++.h>
using namespace std;

int n,k;
int arr[100000+10];

int check(int mid){
    int tPices=0;
    for(int i=0;i<n;i++){
        tPices+=arr[i]/mid;
    }
    return tPices>=k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int low=1;
    int high=*max_element(arr,arr+n);
    int ans=0;
    while(low<=high){
        int mid=(high+low)/2;
        
        if(check(mid)){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
    
}
