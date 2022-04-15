#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    vector<int> s(10, 0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m, cnt = 0;
        cin >> n >> m;
        v.resize(n, 0);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
            s[v[j]]++;
        }
        int mm = v[m]+1;
        for (mm; mm <= 9; mm++) {
            cnt += s[mm];
        }
        vector<int>::iterator iter;
        int tmp = 0, target = v[m]+1;
        while (tmp == 0) {
            for (iter = v.end()-1;; iter--) {
                tmp = 1;
                if (*iter == target) break;
                tmp = 0;
                if (iter == v.begin()) break;
            }
            target++;
            if (target > 10) {
                iter = v.end();
                break;
            }
        }
        for (iter; iter != v.end(); iter++) {
            if (*iter == v[m]) cnt++;
        }
        for (int k = 0; k <= m; k++) {
            if (v[k] == v[m]) cnt++;
        }
        cout << cnt << "\n";

        fill_n(s.begin(), 10, 0);
    }

    return 0;
}