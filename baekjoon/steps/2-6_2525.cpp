#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;
    b += c;

    int hour, min, hop;
    min = b%60;
    hop = b/60;
    hour = (a + hop) % 24;

    cout << hour << " " << min;
    return 0;
}