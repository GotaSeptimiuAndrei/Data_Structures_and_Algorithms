//https://www.pbinfo.ro/probleme/3113/countwords
#include<bits/stdc++.h>
using namespace std;

struct matr{
	char cuvant[101]; int fr;
};

matr mt[1001];
int lg;


int pozP (char p[]) {
	for (int i = 1; i <= lg; i++)
		if (strcmp(mt[i].cuvant, p) == 0)
			return i;
	return 0;
}

bool cmp(matr a, matr b){
	if(strcmp(a.cuvant, b.cuvant)<0)
		return 1;
	return 0;
}
int main () {
	char s[10001], c[10001];

	cin.getline(s, 10000);

	strcpy(c, s);
	char *p = strtok(s, " ,.!?");
	//vrem sa nu se repete in vector cuvintele + sa retinem cate cuvinte sunt 

	while (p) {
		int poz = pozP(p);
		if(poz == 0){
			strcpy(mt[++lg].cuvant, p);
			mt[lg].fr = 1;
		}
		else
			mt[poz].fr++;
		p = strtok(NULL, " ,.!?");
	}

	//sort(mt.begin(), mt.end(), cmp);


	for (int i = 1; i < lg; i++) {
		for (int j = i + 1; j <= lg; j++)
			if (strcmp(mt[i].cuvant, mt[j].cuvant) > 0)
				swap(mt[i], mt[j]);
	}

	for (int i = 1; i <= lg; i++)
		cout << mt[i].cuvant << ' ' << mt[i].fr << endl;
}
