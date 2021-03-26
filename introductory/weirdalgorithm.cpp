#include <iostream>
#include <vector>
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
    vector <long long> v;
    
    v.push_back(n);
    while(n != 1){
        if (n%2 != 0){
            n = n*3 + 1;
            v.push_back(n);
        }
        else{
            n = n/2;
            v.push_back(n);
        }
    }
    for (long long i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
	return 0;
}