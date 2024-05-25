//https://www.pbinfo.ro/probleme/2975/fradical
void FRadical(int n, int &x, int &y) {
    for (y = 1; y <= n; y++) {
        if (n % y == 0) {
            if (sqrt(n / y) == (int)(sqrt(n / y))) {
                x = sqrt(n / y);
                break;
            }
        }
    }
}
