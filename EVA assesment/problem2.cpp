#include<iostream>
#define MAX 6
using namespace std;
int main() {
	int count = 0;
	char arr[3][6] = { {'#', '.', '#', '#', '.', '#'},
						{'.','#','#','#','#','.'},
						{'#','.','#','#','.','#'} };
	int m = 3, n = 6;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == '#') {
				continue;
			}
			else if (arr[i][j] == '.') {
			//check left
				if (j-1  >= 0) {
					if (arr[i][j-1] == '.') {
						arr[i][j] = '#';
						continue;
					}
				}
				//check right
				if (j + 1 < n) {
					if (arr[i][j + 1] == '.') {
						arr[i][j] = '#';
						continue;
					}
				}
				//upper left
				if (i - 1 >= 0 && j - 1 >= 0) {
					if (arr[i - 1][j - 1] == '.') {
						arr[i][j] = '#';
						continue;
					}
				}
				//upper right
				if (i - 1 >= 0 && j + 1 < n) {
					if (arr[i - 1][j + 1] == '.') {
						arr[i][j] = '#';
						continue;
					}
				}
				count++;
			}
		}
	}
	cout << count;
}
