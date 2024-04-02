int randomNumber(int n)
{
    srand(time(0));
    return rand() % n;
}
