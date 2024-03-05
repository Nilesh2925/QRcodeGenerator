#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int t; cin>>t;
int k=t;
while(t--){
ll n;cin>>n;
vector<int> prime;
 while (n % 2 == 0) 
    { 
        prime.push_back(2);
        n = n/2; 
    } 
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
            prime.push_back(i);
            n = n/i; 
        } 
    } 
    if (n > 2) 
       prime.push_back(n);
  ll sum=0;
  for(auto it:prime) sum+=it;
  if(sum>41) cout<<"Case #"<<k-t<<": "<<-1<<endl;
  else{
    ll rem=41-sum;
     cout<<"Case #"<<k-t<<": ";
     cout<<prime.size()+rem<<" ";
     while(rem--) cout<<1<<" ";
     for(auto it:prime) cout<<it<<" ";
     
     cout<<endl;
  }
}
return 0;
}