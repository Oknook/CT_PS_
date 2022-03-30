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
    int a = 1;
    int* b = &a;
    int c = 1;
    a++;
    cout << a << " " << *b << " " << c;

    return 0;
}