#include <bits/stdc++.h>

#define ll long long

using namespace std;

void decode() {
	int l[100], r[100], n;
	cin >> n;
	for(int i=0; i<n; ++i) 
		cin >> l[i];
	for(int i=0; i<n; ++i)
		cin >> r[i];
	int ans=0;
	ll maxLR=0, maxR=0;
	for(int i=0; i<n; ++i) {
		if(l[i]*1LL*r[i]>maxLR) {
			maxLR=l[i]*1LL*r[i];
			maxR=r[i];
			ans=i;
		} else if(l[i]*1LL*r[i]==maxLR) {
			if(r[i]>maxR) {
				maxR=r[i];
				ans=i;
			}
		}
	}
	cout << ans+1 << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
}
