#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isBalanced(string s) {
    string res;
    char st[1001]; //10^3
    int top=-1,i=0;
    while(s[i])
        {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(') 
            st[++top]=s[i];
        else if(top==-1) 
            return "NO";
        else if((s[i]==')' && st[top]!='(') || (s[i]=='}' && st[top]!='{') || (s[i]==']' && st[top]!='[')) 
            return "NO";
        //invalid case
        else top--; 
        i++;
        }
    if(top==-1) 
        res="YES";
    else 
        res="NO";
    
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
