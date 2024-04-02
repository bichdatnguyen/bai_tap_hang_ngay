int gcd(int a, int b)
{
    while(a * b > 0)
    {
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

bool isCoPrime(int a, int b)
{
    return (gcd(a, b) == 1);
}
