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
    long long arr[n];
    for (long long i=0;i<n-1;i++){
    	cin >> arr[i];
    }
    sort (arr,arr+(n-1));

    for (long long i=0;i<n;i++){
        if (arr[i] != i+1){
            cout << i+1;
            break;
        }
    }
    return 0;
}