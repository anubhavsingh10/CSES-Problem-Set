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
    int t;
    cin >> t;
    while (t--){
    	long long a,b;
    	cin >> a >> b;
    	long long l1,l2;
    	
    	int ctrl=0;
    	while (a>=0 and b>=0){
    		if ((a+b)%3 != 0){
    			break;
    		}
    		if (a==b and a==0){
    			cout << "YES" << endl;
    			ctrl++;
    			break;
    		}
    		if (a>=b){
    			a -= 2;
    			b -= 1;
    		}
    		else{
    			a -= 1;
    			b -= 2;
    		}
    	}
    	if (ctrl==0){
    		cout << "NO" << endl;
    	}
    }
    
	return 0;
}