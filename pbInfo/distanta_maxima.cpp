//https://www.pbinfo.ro/probleme/1436/distanta-maxima
#include<bits/stdc++.h>
using namespace std;

ifstream fin("distanta.in");
ofstream fout("distanta.out");

int f[1005][2], maxx, x, cnt;

int main () {
	while (fin >> x) {
		cnt++;
		if (f[x][0] == 0)
			f[x][0] = cnt;
		else
			f[x][1] = cnt;
	}

	for (int i = 1; i <= 1000; i++)
		if (f[i][1] - f[i][0] > maxx)
			maxx = f[i][1] - f[i][0];
	fout << maxx;
}
