#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b)
{
    
    vector<int> first(26,0), second(26,0);
    int sum = 0;
    
    for(int i = 0; i<a.length();i++)
    {
       int temp = a[i] - 97;
       first[temp]++;
    }
    for(int i = 0; i<b.length();i++)
    {
       int temp = b[i] - 97;
       second[temp]++;
    }
    
    for(int i = 0; i<first.size();i++)
    {
        sum += abs(first[i]-second[i]);
    }

    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
