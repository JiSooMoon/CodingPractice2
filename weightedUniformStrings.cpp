#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    
    vector<string> answ(queries.size()); //composed with "Yes" and "No"
    int sum = 0;
    
    //get the MaxSum first from the string 
    for(int i = 0; i < s.size(); i++){
        sum = sum + (s[i] - 'a' + 1);
    }
    
    int count = 0;
    for(int j = 0; j < queries.size(); j++){
        count = count + queries[j];
        if(count > sum){
            answ[j] = "No";
        }else{
            answ[j] = "Yes";
        }
    }

    
    
    return answ;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
