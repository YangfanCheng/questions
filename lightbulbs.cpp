#include<iostream>
#include<vector>

using namespace std;

int bulbs(vector<int> &states);

int main() {
	vector<int> v{0,0,1,1}; //twice 
	int ans;
	ans = bulbs(v);
	cout << ans << endl;
	return 0;	
}

int bulbs(vector<int> &states) {
	int state = 0;
	int n = 0;
	for (int i = 0; i < A.size(); i++) {
		if(states[i] == state) {
			n++;
			state = 1 - state; // lightbulb that are previously on would be off
		}
	}
	return n;
}
