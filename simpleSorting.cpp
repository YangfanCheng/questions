void Solution::arrange(vector<int> &A) {
    vector<int> B(A.size());
    int index;
    for (int i = 0; i < A.size(); i++) {
        index = A[i];
        B[index] = index;
    }
    A = B;
}
