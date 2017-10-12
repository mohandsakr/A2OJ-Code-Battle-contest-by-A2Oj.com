//============================================================================
//problem link:https://a2oj.com/p?ID=479
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use code under your responsiblity
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[101];
int getindex(int m){
	for(int i=m;i>=0;i++){
		if(arr[i])return i;
	}
}
int main() {
int t;
cin>>t;
while(t--){
	int  qualified=0;
	int n,m;
	cin>>n>>m;
	//set<int>sa;
	//set<int>::iterator sasize;

	map<int,int>ma;


	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		++ma[x];
		arr[i]=x;
		//sa.insert(x);
	}
	//sasize=sa.end();
	//--sasize;
	/*for(int i=0;i<m;i+=ma[*sasize],sasize--){
		//if(*sasize){
		qualified+=ma[*sasize];
		}
	}*/
	sort(arr,arr+n);
	reverse(arr,arr+n);
	int theMthElement=arr[getindex(m-1)];
	if(theMthElement==arr[m-2]){
		qualified+=m-1+(ma[theMthElement]-count(arr,arr+m,theMthElement));
	}
	else{

		qualified+=m-1+ma[theMthElement];

	}

	cout<<qualified<<"\n";

}

 	return 0;
}
