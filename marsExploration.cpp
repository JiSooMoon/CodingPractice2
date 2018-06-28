#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    
    int i = 0;
    int asnw = 0;
    
   string check = "SOS";
    while(s[i] != '\0'){
        if(s[i] != check[i % 3]){
            asnw++;
        }
        i++;
    }
    
    return asnw;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
