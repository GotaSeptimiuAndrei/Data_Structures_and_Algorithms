//https://www.pbinfo.ro/probleme/1323/matrice-rara
#include<bits/stdc++.h>
using namespace std;

ifstream fin("matrice_rara.in");
ofstream fout("matrice_rara.out");

struct abc
{
    int l, c, val;
};

abc x[300005], y[300005], z[300005];
int n, m, n1, n2, lg;

int main () {
    fin >> n >> m >> n1 >> n2;

    for (int i = 1; i <= n1; i++)
        fin >> x[i].l >> x[i].c >> x[i].val;
    for (int i = 1; i <= n2; i++)
        fin >> y[i].l >> y[i].c >> y[i].val;

    int i = 1, j = 1;
    while (i <= n1 && j <= n2) {
        if (x[i].l > y[j].l || x[i].l == y[j].l && x[i].c > y[j].c) {
            z[lg++] = y[j++];
        }
        else if (x[i].l < y[j].l || x[i].l == y[j].l && x[i].c < y[j].c) {
            z[lg++] = x[i++];
        }
        else { 
            if(x[i].val + y[j].val != 0){
            	z[lg] = x[i];
            	z[lg].val += y[j].val;
            	lg++;
            }
            i++;
            j++;
        }
    }

    while (i <= n1) {
        z[lg++] = x[i];
        i++;
    }

    while (j <= n2) {
        z[lg++] = y[j];
        j++;
    }

    fout << lg << "\n";
    for (int i = 0; i < lg; i++)
        fout << z[i].l << ' ' << z[i].c << ' ' << z[i].val << "\n";

    //fin.close();
    //fout.close();
    return 0;
}
