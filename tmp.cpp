#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <typeinfo>
#include <stack>
#include <queue>
#include <typeinfo>

using namespace std;

int main()
{
    string a = "123+456";
    string b = a.substr(a.find('+'));
    cout << b;
    return 0;
}