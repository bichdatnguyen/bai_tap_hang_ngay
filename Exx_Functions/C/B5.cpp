bool isPrime(int n)
{
    if(n < 2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}

void printPrime(int n)
{
    for(int i=2; i<n; i++)
        if(isPrime(i))
            cout << i << " ";
}
