//https://www.pbinfo.ro/probleme/3297/fmi-orase1
#include <bits/stdc++.h>
using namespace std;
ifstream fin("fmi_orase1.in");
ofstream fout("fmi_orase1.out");
int main() {
    int n, maxim = -1;
    fin >> n;
    int a[n+5];
    for (int i = 1; i <= n; i++)
         fin >> a[i];
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n; j++) {
             int minn = min(a[i],a[j]);
             int capacitate = minn * (j - i);
             maxim = max(maxim, capacitate);
        }
     }
   fout << maxim;
   return 0; 
}
