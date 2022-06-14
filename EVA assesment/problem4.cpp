#include <iostream>
using namespace std;
//note i have searched for the calculation to calculate LCM from gcd
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
//calculate summation
long long lcm_sum(int number) {
    long long sum=0;
    for (int i = 1; i <= number; i++) {
        sum += lcm(i, number);
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the number of test cases\n";
    cin>> n;
    int no;
    for (int k = 0; k < n; k++) {
        cout << "Enter a number\n";
        cin >> no;
        cout << lcm_sum(no) << endl;
    }
}
