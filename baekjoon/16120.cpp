#include <iostream>
#include <string>

using namespace std;

// ¾ÆÁ÷ ¸ø¸ÂÃã

int main()
{
    string str;
    cin >> str;

    while (str.find("PPAP") != string::npos)
    {
        if (str == "PPAP") break;
        str.replace(str.find("PPAP"), 4, "P");
    }
    if (str == "PPAP") cout << "PPAP";
    else cout << "NP";

    return 0;
}