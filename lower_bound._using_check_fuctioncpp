#include<bits/stdc++.h>
using  namespace std;

int n,x;
int arr[100000];
//check funtion ---------->>> 0 0  0  1 1 1 ,we always convert the problem with an 0,1 function,and find the first 1(check function concept)
int check(int mid){
    if(arr[mid]>=x) return 1;
    else return 0;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>x;
    int low=0;
    int high=n-1;
    int ans=n;
    
    while(low<=high){
        int mid=(low+high)/2;
        
        if(check(mid)==1){
            ans=mid;             //if find 1 we can check left side
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
}
