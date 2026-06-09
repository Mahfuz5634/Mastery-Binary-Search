#include<bits/stdc++.h>
using namespace std;

int s,c;
int arr[100000 + 5];

int check(int mid){
    int intPos=arr[0];
    int cnt=1;
    
    for(int i=1;i<s;i++){
        if(arr[i]-intPos>=mid){
            cnt++;
            intPos=arr[i];
        }
        if(cnt==c) return 1;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s>>c;
        for(int i=0;i<s;i++) cin>>arr[i];
        sort(arr,arr+s);
        
        int low=1;
        int high=arr[s-1]-arr[0];
        int ans=0;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(check(mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        cout<<ans<<endl;
    }
}
