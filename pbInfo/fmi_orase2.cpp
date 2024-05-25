//https://www.pbinfo.ro/probleme/3298/fmi-orase2
#include <fstream>

using namespace std;

ifstream cin("fmi_orase2.in");

ofstream cout("fmi_orase2.out");

int n, f[1005], x;

void functie(int x)

{

   for(int i=1; i<=x; i++)

       f[i]++;

}

int main()

{

   cin>>n;

   for(int i=1; i<=n; i++)

   {

       cin>>x;

       functie(x);

   }

   for(int i=100; i>=1; i--)

       if(f[i]>=i)

       {

           cout<<i;

           return 0;

       }

}

