//in this code we fill the coloum one time and fill the rows another time then 
//we take the larger

#include<iostream>
#define MAX 6
using namespace std;
int main() {
	int countWithRows = 0;
	int countWithColoums = 0;
	int count;
	int m = 5, n = 5;
	char arr[5][5]= { {'#', '.', '.', '.', '#'},
						{'.','#','.','#','.'},
						{'.','.','#','.','.',},
						{'.','#','.','#','.'} ,
						{'#','.','.','.','#'} };
	char arrcopy[5][5] = { {'#', '.', '.', '.', '#'},
					{'.','#','.','#','.'},
					{'.','.','#','.','.',},
					{'.','#','.','#','.'} ,
					{'#','.','.','.','#'} };
	//this part fill the rows first
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == '#') {
				continue;
			}
			else if (arr[i][j] == '.') {
				if (i - 1 >= 0) {
					//check left
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
				//check top right

				if (i - 1 >= 0 && j - 1 >= 0) {
					if (arr[i - 1][j - 1] == '.') {
						arr[i][j] = '#';
						continue;
					}
				}
				//check top left

				if (i - 1 >= 0 && j + 1 < n) {
					if (arr[i - 1][j + 1] == '.') {
						arr[i][j] = '#';
						continue;
					}
				}
				countWithRows++;
			}
		}
	}
	//this part fill the coloums first
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arrcopy[j][i] == '#') {
				continue;
			}
			else if (arrcopy[j][i] == '.') {
				if (i - 1 >= 0) {
					//check left
					if (arrcopy[j][i-1] == '.') {
						arrcopy[j][i] = '#';
						continue;
					}
				}
				//check top left
				if (j - 1 <=0 && i + 1 <n) {
					if (arrcopy[j -1][i + 1] == '.') {
						arrcopy[j][i] = '#';
						continue;
					}
				}
				countWithColoums++;
			}
		}
	}
	//we take the largest of them
	if (countWithColoums > countWithRows)
		count = countWithColoums;
	else
		count = countWithRows;

	cout << count;
}
