#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    // ��Ŭ���� ȣ����
    int a = n, b = m;
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    cout << a << "\n";
    cout << n*m/a;

    return 0;
}