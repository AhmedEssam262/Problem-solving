int hourglassSum(vector<vector<int>> arr) {
    int max = INT32_MIN;
    int sum=0;

    for (int i = 0; i+2 < 6; i++) {
        for (int j = 0; j+2 < 6; j++) {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
                + arr[i + 1][j + 1]
                + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (sum > max) max = sum;
        }

    }
    return max;
}
