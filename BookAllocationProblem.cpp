#include<bits/stdc++.h>
using namespace std;


int n,m;
int arr[100000+10];

int check(int mid){
    int std=1;
    int sum=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>mid) return 0;
        
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            std++;
            sum=arr[i];
        }
    }
    if(std<=m) return 1;
    else return 0;
}

int main(){
    cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int maxE=*max_element(arr,arr+n);
    if(m>n) cout<<"-1"<<endl;
    
    int low=maxE;
    int high=sum;
    int ans=0;
    
    while(low<=high){
        int mid=(low+high)/2;
        
        if(check(mid)){
            ans=mid;
            high=mid-1;
    }
    else{
        low=mid+1;
    }
}
cout<<ans<<endl;
}
