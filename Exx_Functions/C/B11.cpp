string numberBase2(int n)
{
    string ans = "";
    while(n > 0) {
        if(n % 2 == 0) ans = '0' + ans;
        else ans = '1' + ans;
        n /= 2;
    }
    return ans;
}
