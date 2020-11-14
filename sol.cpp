#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		string ns="";
		int cnt=0;
		for(int i=(int)s.size()-1; i>=0; --i) {
			if(cnt==3) {
				ns+=",";
				cnt=0;
			}
			ns+=s[i];
			cnt++;
		}
		reverse(ns.begin(), ns.end());
		cout << ns << ".00" << "\n";
	}
}
