//This is the optimal solution of the problem
//It uses fenwick tree to solve the question

#include <bits/stdc++.h>

using namespace std;

long long fwt[1000001]={0};
int n;

//function to update the value at index idx by x
void update(int idx,int x){
	while(idx<=n){
		fwt[idx]+=x;
		idx+=idx&(-idx);
	}
}


//function to calculate the sum of elements upto index idx(inclusive)
long long sum(int idx){
	long long s=0;
	while(idx>0){
		s+=fwt[idx];
		idx-=idx&(-idx);
	}
	return s;
}

int main(){
	cin>>n;
	int a;
	for(int i=1;i<=n;i++){
		cin>>a;
		update(i,a);
	}
	cin>>a;
	while(a--){
		char s;
		int x,y;
		cin>>s>>x>>y;
		if(s=='u'){
			update(x,y);
		}
		else{
			cout<<sum(y)-sum(x-1)<<"\n";
		}
	}
}