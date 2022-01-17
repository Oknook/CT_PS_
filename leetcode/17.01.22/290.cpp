#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

// have to learn more handling string/array & find/replace function

int main()
{
    string pattern = "abba";
    string s = "dog cat cat doge dope";
    string c = "A";
    istringstream ss(s);
    string tmp;
    string answer = "";
    vector<string> v;
    
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    replace(v.begin(),v.end(),v[1],c); 
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
    

    // for (auto & c: pattern) c = toupper(c);
    
    // cout << (pattern == answer);

    return 0;
}