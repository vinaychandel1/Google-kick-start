#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin>>t;
long int n,k;
for(int l=0;l<t;l++){	
cin>>n>>k;
int ans=0;
long int arr[n];
for (int i = 0; i < n; ++i){
cin>>arr[i];
}
for (int i = 0; i < n; ++i){		    
if(arr[i]==k){
int x=k;
for (int j = i; i < j+k; ++j){
if(arr[j]==x){
x--;
}
else {
break;
}
}
if(x==0){
ans=ans+1;
}
}
}
cout<<"Case #"<<l+1<<": "<<ans<<endl;
}
} 
