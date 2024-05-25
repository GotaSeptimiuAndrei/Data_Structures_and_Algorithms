//https://www.pbinfo.ro/probleme/236/sort2
#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("sort2.in");
ofstream fout("sort2.out");

int main () {
	int x, frecv[100] = {0}, ok = 0;
	while (fin >> x)
		if (x >= 0 && x <= 99) {
			frecv[x]++;
			ok = 1;
		}

	for (int i = 0; i <= 99; i++)
		while (frecv[i]--)
			fout << i << ' ';

	if (ok == 0)
		fout << "NU EXISTA";

	fin.close();
	fout.close();
	return 0;

}
