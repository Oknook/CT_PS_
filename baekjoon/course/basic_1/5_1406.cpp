#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
// 아직못맞춤
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    int i = str.length();
    vector<char> v;
    for (int i = 0; i < str.size(); i++)
    {
        v.push_back(str[i]);
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string c;
        getline(cin, c);
        switch (c[0])
        {
        case 'P':
            char tmp = c[2];
            v.insert(i, tmp);
            i+=1;
            break;

        case 'L':
            if(i > 0) i-=1;
            break;

        case 'D':
            if (i < v.size()) i+=1;
            break;
        
        case 'B':
            if (i == 0) continue;
            v.erase(i-1);
            i-=1;
            break;
        }
    }
    cout << string(v);
}

// 처음에 짠 코드
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     string str;
//     int n;

//     getline(cin, str);
//     string::iterator iter = str.end();
//     cin >> n;
//     cin.ignore();

//     for (int i = 0; i < n; i++)
//     {
//         string tmp;
//         getline(cin, tmp);
//         if (tmp[0] == 'L' && iter != str.begin()) iter--;
//         else if (tmp[0] == 'D' && iter != str.end()) iter++;
//         else if (tmp[0] == 'B' && iter != str.begin()) iter = str.erase(iter-1);
//         else if (tmp[0] == 'P') iter = str.insert(iter, tmp[2])+1;
//     }
//     cout << str;
    
//     return 0;
// }