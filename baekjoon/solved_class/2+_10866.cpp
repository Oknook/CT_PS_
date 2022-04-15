#include <iostream>
#include <string>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        getline(cin, v[i]);
    }

    deque<int> d;
    for (int i = 0; i < n; i++) {
        switch (v[i][0])
        {
        case 'p':
            if (v[i][1] == 'u') {
                // auto iter = v[i].end()-1;
                // int j = (*iter)-'0';
                if (v[i][5] == 'f') {
                    int j = 0;
                    for (int z = 11; z < v[i].length(); z++) {
                        j *= 10;
                        j += v[i][z]-'0';
                    }
                    d.push_front(j);
                }
                else {
                    int j = 0;
                    for (int z = 10; z < v[i].length(); z++) {
                        j *= 10;
                        j += v[i][z]-'0';
                    }
                    d.push_back(j);
                }
            }
            else {
                if (v[i][4] == 'f') {
                    if (d.empty()) cout << -1 << "\n";
                    else {
                        cout << d.front() << "\n";
                        d.pop_front();
                    }
                }
                else {
                    if (d.empty()) cout << -1 << "\n";
                    else {
                        cout << d.back() << "\n";
                        d.pop_back();
                    }
                }
            }
            break;

        case 's':
            cout << d.size() << "\n";
            break;

        case 'e':
            if (d.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
            break;

        case 'f':
            if (d.empty()) cout << -1 << "\n";
            else cout << d.front() << "\n";
            break;

        case 'b':
            if (d.empty()) cout << -1 << "\n";
            else cout << d.back() << "\n";
            break;
        }
    }

    return 0;
}