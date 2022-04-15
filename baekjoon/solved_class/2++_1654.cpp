#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> k >> n;

    vector<int> v(k);
    for (int i = 0; i < k; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    long long left = 1, right = v[k-1];
    int ans = 0;
    while(left <= right) {
        long long cnt = 0;
        long long mid = (right+left)/2;
        for (int j = 0; j < k; j++) {
            cnt += (v[j]/mid);
        }
        if (cnt < n) right = mid-1;
        else {
            left = mid+1;
            ans = mid;
        }
    }

    cout << ans;

    return 0;
}