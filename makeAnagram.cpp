#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {

    vector<int> array(26,0);
    for(int i = 0; i < a.size(); i++){
        int c = a[i] - 'a';
        array[c]++;
    }
    for(int j = 0; j < b.size(); j++){
        int d = b[j] - 'a';
        array[d]--;
    }
    int count = 0;
    for(int k = 0; k < 26; k++){
        cout << array[k] << endl;
        count+=abs(array[k]);
    }
    
    return count;
    
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
