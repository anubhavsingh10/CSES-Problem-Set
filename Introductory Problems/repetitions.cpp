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
    string s;
    cin >> s;
    int ans=0;
    int sum =0;
    int n = s.size();
    vector <int> v;
    for (int i=1;i<n;i++){

    	if (s[i]==s[i-1]){
    		sum++;
    		
    	}
    	else{
    		
    		v.push_back(sum);
    		sum =0;
    	}

    }
    v.push_back(sum);
    sort(v.begin(),v.end());
    cout << v[v.size()-1]+1 << endl;
    
	return 0;
}