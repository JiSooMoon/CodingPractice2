#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int Nelement;
    cin >> Nelement;
    int num;
    cin >> num;
    
    int bill = 0;
    int total_cost = 0;
   
    for(int i = 0; i < Nelement; i++){
        int element;
        cin >> element;
        if(i == num){
            bill = element;
        }else{
            total_cost+=element;
        }
    }
    int b_actual = total_cost/2;
    int b_charged;
    cin >> b_charged;
    
    if(b_actual == b_charged){
        cout << "Bon Appetit";
    }else{
        cout << b_charged - b_actual;
    }
    return 0;
}


/*
Sample Input 0

4 1
3 10 2 9
12
Sample Output 0

5

bill[1] = 10
total_cost = 3+ 2 + 9 = 14
split in half b_actual = 7
              b_charged = 12
              Therefore, b_charged - b_actual = 12 - 7 = 5
              if(b_charged == b_actual) "Bon Appetit



*/
