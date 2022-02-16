#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> in;
	int cases;
	int rank;
	cin >> cases;

	for (int i = 0; i < cases; i++) {
		rank = 0;
		int pages, papers;
		cin >> pages;
		cout << "Case #" << i+1 << ":";

		for (int j = 0; j < pages; j++) {
			cin >> papers;
			in.push_back(papers);
		}
		for (int k = 1; k <= in.size(); k++) {
			int count = 0;
			for (int l = 1; l <= k; l++) {
				if (in[l-1] >= rank+1) {
					count++;
				}
			}
			if (count >= rank+1) {
				rank++;
			}
			cout << " "<<rank;
		}
		in.clear();
		cout << "\n";
	}
	return 0;
}
