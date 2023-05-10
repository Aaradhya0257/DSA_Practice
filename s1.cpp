#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 0;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        char ch = str.at(i);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}