//https://www.pbinfo.ro/probleme/2611/raza
#include<iostream>
#include<fstream>
using namespace std;

int main () {
	long long a, b;
	cin >> a >> b;
	long long n = a, m = b;
	while (b) {
		long long r = a % b;
		a = b;
		b = r;
	}

	cout << n / a + m / a - 2;
}
