#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int tmp;
        cin >> tmp;
        sum += int(pow(tmp, 2));
    }
    cout << sum % 10;
    
    return 0;
}