#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
   
    vector<int> a1(26);
    vector<int> a2(26);
    
    for(int i = 0; i < s1.size(); i++){
        ++a1[s1[i] - 'a'];
    }
    for(int j = 0; j < s2.size(); j++){
        ++a2[s2[j] - 'a'];
    }
    int count = 0;
    int k;
    for( k = 0; k < 26; k++){
       // cout << a1[k] << "    and   " << a2[k] << endl;
        if(a1[k] > 0 && a2[k] > 0){
            break;
        }
    }
    if(k == 26) return "NO";
    return "YES";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
