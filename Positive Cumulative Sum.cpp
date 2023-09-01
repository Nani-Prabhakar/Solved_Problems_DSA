Positive Cumulative Sum
vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	// add your logic here
	
	vector<int>ans;
	int cum=0;
	for(int i=0;i<arr.size();i++){
		cum+=arr[i];
		if (cum>0)ans.push_back(cum);
	}
	return ans;
}