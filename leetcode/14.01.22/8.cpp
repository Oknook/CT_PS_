#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// wrong answer
int main()
{
    bool minus = false;
    int result = 0;

    string s = "21474836460";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 32) continue;
        else if (s[i] == 43) minus = false;
        else if (s[i] == 45) minus = true;
        else if (!isdigit(s[i])) return result;
        else if (isdigit(s[i]) && result == 0)
        {
            if (minus) result = (int('0')-int(s[i]));
            else result = (int(s[i])-int('0'));
        }
        else if (isdigit(s[i]))
        {
            if (minus)
            {
                if (result < -214748364)
                {
                    result = -2147483648;
                    goto EXIT;
                }
                else if (result == -214748364 && (int(s[i])-int('0')) > 8)
                {
                    result = -2147483648;
                    goto EXIT;
                }
                result = result*10 + (int('0') - int(s[i]));
                cout << result << " !\n";
            }
            else
            {
                if (result > 214748364)
                {
                    cout << "#";
                    result = 2147483647;
                    goto EXIT;
                }
                else if (result == 214748364 && (int(s[i])-int('0')) > 7)
                {
                    cout << "$";
                    result = 2147483647;
                    goto EXIT;
                }
                result = result*10 + int(s[i]) - int('0');
                cout << result << " @\n";
            }
        }
    }
    EXIT:
    cout << result;
    return 0;
}