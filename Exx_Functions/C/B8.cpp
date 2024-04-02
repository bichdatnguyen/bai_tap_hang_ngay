/*int roundingNumber (double num)
{
    return (int)ceil(num);
}*/

int roundingNumber(double n)
{
    if (n >= 0) return (int) (n + 0.5);
    return (int) (n - 0.5);
}
