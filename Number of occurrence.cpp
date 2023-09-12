//Number of occurrence

#include<bits/stdc++.h>

int count(vector<int>& arr, int n, int x) {

	int lB = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
	int uB = upper_bound(arr.begin(),arr.end(),x)-arr.begin();
	return uB-lB;
}