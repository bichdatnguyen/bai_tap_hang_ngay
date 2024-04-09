int countEven(int* a, int s) {
    int cnt = 0;
    for (int i = 0; i < s; i++) {
        if (*(a + i) % 2 == 0) {
            cnt++;
        }
    }
    return cnt;
}
