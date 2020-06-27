#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n], b[m];

	    for(int i=0; i<n; i++)
	        cin>>a[i];
	    for(int i=0; i<m; i++)
	        cin>>b[i];

	    int i=0,j=0;
	    while(i < n && j < m){
	        if(a[i] < b[i])
	            swap(a[i], b[j]);

	        if(j+1 < m && b[j+1] < a[i])
	            swap(a[i], b[j+1]);

	        i++; j++;
	    }

	    i=0,j=0;
	    while(i<n && j<m){
	        cout<<b[j]<<" "<<a[i]<<" ";
	        i++;   j++;
	    }

	    while(i < n){
	        cout<<a[i]<<" ";
	        i++;
	    }
	    while(j < m){
	        cout<<b[j]<<" ";
	        j++;
	    }

	    cout<<endl
	}


	return 0;
}
