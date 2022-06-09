#include <iostream>
using namespace std;

int calc_Sum(int n)
{
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
//we count from 1 to get the smallest number
int smallest_no(int n)
{
	int i = 1;
	while (1) {
		if (calc_Sum(i) == n)
			return i;
		i++;
	}
}

// Driver code
int main()
{
	int n;
	cout << "Enter the number of test cases\n";
	cin >> n;
	int no;
	for (int k = 0; k < n; k++) {
		cout << "Enter a number\n";
		cin >> no;
		cout << smallest_no(no) << endl;

	}
}
