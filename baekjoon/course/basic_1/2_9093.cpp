#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string str;
        string tmp;
        string answer;
        getline(cin, str);
        reverse(str.begin(), str.end());
        vector<string> v;
        
        istringstream strr(str);
        while (getline(strr, tmp, ' '))
        {
            v.push_back(tmp);
        }
        for (int i = v.size()-1; i >= 0; i--)
        {
            answer = answer + v[i] + " ";
        }
        cout << answer.substr(0, answer.length()-1) << "\n";
    }
    return 0;
}