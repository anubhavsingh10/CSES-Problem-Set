#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    long long n;
    cin >> n;
    vector <long long> l;
    vector <long long> r;
    for (long long i=1;i<=n;i++){
    	if (i%2==0){
    		l.push_back(i);
    	}
    	else{
    		r.push_back(i);
    	}
    }
    vector <long long> lr = l;
    lr.insert(lr.end(), r.begin() , r.end());

    if (lr.size()==1){
    	cout << 1 << endl;
    	return 0;
    }
    
    for (long long i=0;i<n;i++){
    	if (lr[i+1]-lr[i]==1 or lr[i+1]-lr[i]== -1){
    		cout << "NO SOLUTION";
    		return 0;
    	}
    }
	for (long long i=0;i<n;i++){
    	cout << lr[i] << " ";
    }
	return 0;
}