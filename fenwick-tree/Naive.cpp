//This is a naive implementation of the problem
//It won't pass all cases and will give a time limit exceeded

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int q;
	cin>>q;
	while(q--){
		char s;
		int x,y;
		cin>>s>>x>>y;
		if(s=='u')
			a[x]+=y;
		else{
			long long sum=0;
			for(int i=x;i<=y;i++){
				sum+=a[i];
			}
			cout<<sum<<"\n";
		}
	}
}