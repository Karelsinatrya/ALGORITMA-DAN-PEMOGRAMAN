#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Fungsi untuk mengecek pasangan kurung
bool isMatching(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int main()
{
    string ekspresi;
    stack<char> s;

    cout << "Masukkan ekspresi: ";
    getline(cin, ekspresi);

    for (char c : ekspresi)
    {

        if (c == '(' || c == '{' || c == '[')
        {
            s.push(c);
        }

        else if (c == ')' || c == '}' || c == ']')
        {

            if (s.empty())
            {
                cout << "Tidak Valid\n";
                return 0;
            }

            if (!isMatching(s.top(), c))
            {
                cout << "Tidak Valid\n";
                return 0;
            }

            s.pop();
        }
    }

    if (s.empty())
    {
        cout << "Valid\n";
    }
    else
    {
        cout << "Tidak Valid\n";
    }

    return 0;
}