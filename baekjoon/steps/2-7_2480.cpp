#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if (a==b && b==c) cout << 10000 + a*1000;
    else if (a!=b && b!=c && a!=c)
    {
        b = b<c?c:b;
        a = a<b?b:a;
        cout << a*100;
    }
    else {
        if (a==b || a==c) cout << 1000+a*100;
        else cout << 1000+b*100;
    }

    return 0;
}