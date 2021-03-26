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
    cin >> n ;
    long long arr[n];
    for (long long i=0;i<n;i++){
    	cin >> arr[i];
    }
    long long min=0;
    long long sum=0;
    for (long long i =0;i<n-1;i++){
    	min = arr[i]-arr[i+1];
    	if (min>0){
    		arr[i+1]=arr[i];
    		sum += min;
    	}
    }
    cout << sum ;
    
	return 0;
}