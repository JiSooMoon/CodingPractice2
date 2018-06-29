#include <bits/stdc++.h>

using namespace std;

// Complete the stringConstruction function below.
int stringConstruction(string s) {
    
    int size = 0;
    vector<int> p(26);
    
    for(int i = 0; i < s.size(); i++){
        cout <<   p[s[i] - 'a'] << endl;
        ++p[s[i] - 'a'];
        
    }
    for(int k = 0; k < 26; k++){
        if(p[k] != 0){
            size++;
        }
    }
    
    return size;
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

        int result = stringConstruction(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
