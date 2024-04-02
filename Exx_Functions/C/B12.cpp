int toHop(int k, int n)
{
    if(k > n) return 0;
    else if(k == 1 || k == (n - 1)) return n;
    else if(k == 0 || k == n) return 1;
    return toHop(k-1, n-1) + toHop(k, n-1);
}
