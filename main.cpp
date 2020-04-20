#include <iostream>
using namespace std;
bool sortuj (string s);
bool anagram (string s1, string s2);
string s, s1, s2;
int main()
{
    cout << "Wpisz palindrom" << endl;
    cin >> s;
    if(sortuj(s)==true) cout << "Tak, to jest palindrom" << endl;
    else
        cout << "Nie, nie jest to palindrom" << endl;
    cout << "Wporwadz pierwszy wyraz" << endl;
    cin >> s1;
    cout << "Wporwadz drugi wyraz" << endl;
    cin >> s2;
    if(anagram(s1,s2)==true) cout << "To anagram" << endl;
    else
        cout << "To nie anagram" << endl;
    return 0;
}
bool anagram (string s1, string s2)
{
int dl=s1.size();
if (dl!=s2.size()) return false;
else
{
int T1[2]={0,0}, T2[2]={0,0};
for (int i=0;i<dl;i++)
{
if (s1[i]=='X') T1[0]++;
else T1[1]++;
if (s2[i]=='X') T2[0]++;
else T2[1]++;
}
for (int i=0;i<2;i++)
if(T1[i]!=T2[i]) return false;
}
return true;

}

bool sortuj (string s)
{
int dl=s.size();
for (int i=0;i<dl/2;i++)
if (s[i]!=s[dl-i-1]) return false;
return true;
}

