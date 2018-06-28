#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {

    int t = 0;
    string check = "hackerrank";
  
    int count = 0;
    for(int i = 0; i < check.size(); i++){
        for(int j = t; j < s.size(); j++){
            t = j + 1;
            if(check[i] == s[j]){
                count++;
                break;
            }
        }
    }
    if(count == check.size()) return "YES";
    return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
