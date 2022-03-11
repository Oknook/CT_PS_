#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int solve(string input);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string strr;
    cin >> strr;
    
    vector<string> v;
    stringstream ss(strr);
    string temp;
    while(getline(ss, temp, '-'))
    {
        v.push_back(temp);
    }

    int answer = solve(v[0]);
    if (v.size() != 1)
    {
        for(int i = 1; i < v.size(); i++)
        {
            answer -= solve(v[i]);
        }
    }
    cout << answer;

    return 0;
}

int solve(string input)
{
    vector<string> tmpv;
    stringstream ss(input);
    string tmps;
    while(getline(ss, tmps, '+'))
    {
        tmpv.push_back(tmps);
    }

    int tmpi = 0;
    for (int i = 0; i < tmpv.size(); i++)
    {
        tmpi += stoi(tmpv[i]);
    }
    return tmpi;
}