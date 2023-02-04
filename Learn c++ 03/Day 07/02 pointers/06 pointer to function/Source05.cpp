#define N 10

int geteven() {
    static int i = 0;
    return 2 * i++;
}

int getodd() {
    static int i = 0;
    return 2 * i++ + 1;
}





void fill(int arr[], size_t size, int (*filler)()) {
    for (size_t i = 0; i < size; i++)
        arr[i] = filler();
}

int main() {
    int n[N];
    fill(n, N, geteven);
    fill(n, N, getodd);

}