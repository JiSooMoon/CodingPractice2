#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string first;
    string second;
    cin >> first;
    cin >> second;
    
    int firstSize = first.size();
    int secondSize = second.size();
    cout << firstSize << " " << secondSize << endl;
    cout << first << second << endl;
    cout << second[0];
    for(int i = 1; i < firstSize; i++){
        cout << first[i];
    }
    cout << " " << first[0];
      for(int i = 1; i < secondSize; i++){
        cout << second[i];
    }
        
        
    return 0;
}
