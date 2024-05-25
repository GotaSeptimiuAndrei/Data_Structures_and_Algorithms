//https://www.pbinfo.ro/probleme/3736/sir15
#include<bits/stdc++.h>
using namespace std;

ifstream fin("sir.in");
ofstream fout("sir.out");

int main () {
	int c, maxx = -1;
	fin >> c;
	int n;
	fin >> n;
	int a[n + 5];
	for (int i = 1; i <= n; i++) {
		fin >> a[i];
		maxx = max(maxx, a[i]);
	}

	if (c == 1) {
		int poz = 0;
		for (int i = 1; i <= n; i++)
			if (a[i] == maxx) {
				poz = i;
			}
		fout << poz;
	} else if (c == 3) {
		long long sum = 0;
		int poz1 = 0, poz2 = 0;

		for (int i = 1; i <= n; i++)
			if (a[i] == maxx) {
				poz1 = i;
				break;
			}

		for (int i = n; i >= 1; i--)
			if (a[i] == maxx) {
				poz2 = i;
				break;
			}
		if (poz1 == poz2)
			fout << 0;
		else {
			for (int i = poz1; i <= poz2; i++) {
				if (a[i] == maxx)
					continue;
				sum = sum + (maxx - a[i]);
			}
			fout << sum;
		}
	} else {
		int x = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] > x) {
				fout << i << ' ';
				x = a[i];
			}
		}
	}
}
