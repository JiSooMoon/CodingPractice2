#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    
    for(int i = 1; i <= n; i++){
          
        string theEmpty(n-i, ' ');
        string symbol(i,'#');
        
        cout << theEmpty << symbol << endl;
        
    }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
