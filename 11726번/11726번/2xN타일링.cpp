#include <algorithm>
#include <iostream>
using namespace std;

int n;
int a[10001];
int main()
{
	cin >> n;
	a[0] = 1;
	a[1] = 1;

	for (int i = 2; i <=n; i++)
		a[i] = (a[i-1] + a[i-2])%10007;

	cout << a[n];
	return 0;
}