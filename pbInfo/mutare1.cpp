//https://www.pbinfo.ro/probleme/1432/mutare1
void aranjare (int v[], int n) {
	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0)
			for (int j = n - 1; j > i; j--)
				if (v[j] % 2 == 1) {
					swap(v[i], v[j]);
					break;
				}
	}
}
