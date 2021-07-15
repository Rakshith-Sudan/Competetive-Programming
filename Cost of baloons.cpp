#include<bits/stdc++.h>
using namespace std;
int main(){
	int cgreen, cpurple, t,n;
	cin>>t;
	while(t--){
		cin>>cgreen>>cpurple;
		cin>>n;
		int cost1=0,cost2=0,first,second;
		for(int i=0;i<n;i++){
			cin>>first>>second;
			cost1=cost1+(first*cgreen)+(second*cpurple);
			cost2=cost2+(first*cpurple)+(second*cgreen);
		}
		if(cost1>cost2)
			cout<<cost2<<endl;
		else
			cout<<cost1<<endl;
	}

}
