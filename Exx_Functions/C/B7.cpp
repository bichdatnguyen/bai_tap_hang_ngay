void printSpace(int m)
{
    for(int i=0; i<m; i++) cout << " ";
}

void printStar(int n)
{
    for(int i=0; i<n; i++) cout << '*';
}

void printTriangle(int n)
{
    for(int i=1; i<=n; i++) {
        printSpace(n - i);
        printStar((i - 1) * 2 + 1);
        cout << endl;
    }
}
