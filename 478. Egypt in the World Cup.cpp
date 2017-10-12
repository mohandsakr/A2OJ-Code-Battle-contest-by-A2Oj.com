	//============================================================================
	//problem link:https://a2oj.com/p?ID=478
	// Name        : 478. Egypt in the World Cup.cpp
	// Author      : mohand sakr
	// Version     :
	// Copyright   : use code under your responsiblity
	// Description : Hello World in C++, Ansi-style
	//status: accepted
	//============================================================================
	#include<bits/stdc++.h>
	#include <iostream>
	#include<map>
	#include<string>
	using namespace std;

	int main() {
		int t;
		cin>>t;
	while(t--){
		int n;
		cin>>n;
		int max=0;
		string maxi;
		for(int i=0;i<n;i++){
			string s;
			int x;
			cin>>s;
			cin>>x;
			if(x>max){
			max=x;
			maxi=s;}
		}
		cout<<maxi<<"\n";
	}

		return 0;
	}
