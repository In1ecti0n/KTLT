#include <bits/stdc++.h>
using namespace std;

int n;
string curString;

void genString(int pos)
{
    if (pos > n)
    {
        cout << curString << "\n";
        return;
    }
    for (char i = '0'; i <= '1'; i ++)
    {
        curString.push_back(i);    //thêm ký tự mới vào dãy
        genString(pos + 1);
        curString.pop_back();      //bỏ ký tự này đi
    }
}

int main()
{
    cin >> n;
    curString = "";
    genString(1);
    return 0;
}