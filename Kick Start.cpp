#include<iostream>
#include<vector>
using namespace std;
int main() {
	int cases;
	cout << "Enter no of cases";
	cin >> cases;
	for (int j = 0; j < cases; j++) {
		int no_bags, no_ch, bag, sum;
		int div, rem;
		cout << "Please enter no bags children and no of children\n";
		cin >> no_bags >> no_ch;
		sum = 0;
		for (int i = 0; i < no_bags; i++) {
			cout << "The bag content \n";
			cin >> bag;
			sum += bag;
		}
		div = sum / no_ch;
		rem = sum - div * no_ch;
		//cout << "Every child will take " << div << endl;
		cout << "Case #"<<j+1<<": " << rem << endl;
	}
}
