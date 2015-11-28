// k-th order statistic
// O(nlogn) complexity
int Solution::kthsmallest(const vector<int> &A, int k) {
    int len = A.size();
    vector<int> B = A;
    sort(B.begin(), B.end());
    return B[k - 1];
}
//quick select O(n)
int Solution::kthSmallest(const vector<int> &A, int k) {
	vector<int> B = A;
	int from = 0, to = B.size() - 1;
	while (from < to) {
		int l = from, r = to;
		int mid = B[(l + r) / 2];
		while (l < r) {
			if (B[l] >= mid) { 
				int tmp = B[r];
				B[r] = B[l];
				B[l] = tmp;
				r--;
			} else { 
				l++;
			}
		  }
		if (B[l] > mid)
			l--;
		if (k <= l) {
		to = l;
		} else {
		from = l + 1;
		}
	}
	return B[k - 1];
}
