
#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,t;
int arr[1000000+5];

int check(int mid){
    int tProduct=0;
    for(int i=0;i<n;i++){

        tProduct+=mid/arr[i];
         if(tProduct>=t) return 1;
    }

     return 0;
}

signed main(){
    cin>>n>>t;

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int low=0;
    int minVal=*min_element(arr, arr+n);
    int high=minVal*t;
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
