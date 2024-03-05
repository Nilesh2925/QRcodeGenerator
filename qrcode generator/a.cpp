#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int t; cin>>t;
int k=t;
while(t--){
ll n; cin>>n;
vector<ll> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr.begin(),arr.end());
if(n%2==0){
  double a1=(double)(arr[1]-arr[0])/2;
  a1+=arr[0];
  double a2=(double)(arr[n-1]-arr[n-2])/2;
  a2+=arr[n-2];
  double ans=a2-a1;
  cout<<"Case #"<<k-t<<": "<<ans<<endl;
}else{
    int point=0,dis=arr[2]-arr[0];
    for(int i=2;i<n-2;i+=2){
      if(i==n-3 && arr[i+2]-arr[i]<dis || arr[i+2]-arr[i]<=dis){
        dis=arr[i+2]-arr[i];
        point=i;
      }
    }
    if(point==0){
       double a1=(double)(arr[2]-arr[0])/2;
  a1+=arr[0];
  double a2=(double)(arr[n-1]-arr[n-2])/2;
  a2+=arr[n-2];
  double ans=a2-a1;
  cout<<"Case #"<<k-t<<": "<<ans<<endl;
    }else if(point==n-3){
       double a1=(double)(arr[1]-arr[0])/2;
  a1+=arr[0];
  double a2=(double)(arr[n-1]-arr[n-3])/2;
  a2+=arr[n-3];
  double ans=a2-a1;
  cout<<"Case #"<<k-t<<": "<<ans<<endl;
    }else{
        double a1=(double)(arr[1]-arr[0])/2;
  a1+=arr[0];
  double a2=(double)(arr[n-1]-arr[n-2])/2;
  a2+=arr[n-2];
  double ans=a2-a1;
  cout<<"Case #"<<k-t<<": "<<ans<<endl;
    }
}
}
return 0;
}