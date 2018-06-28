#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    
    int count = 1;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] >= 65 && s[i] <= 90){
            count++;
        }
        i++;
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
