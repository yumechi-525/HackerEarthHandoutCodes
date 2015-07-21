#include <iostream>
#include <map> 
using namespace std;

int main()
{
    map<char, int> hash;
    
    // entry
    hash['0'] = 6;
    hash['1'] = 2;
    hash['2'] = 5;
    hash['3'] = 5;
    hash['4'] = 4;
    hash['5'] = 5;
    hash['6'] = 6;
    hash['7'] = 3;
    hash['8'] = 7;
    hash['9'] = 6;
    
    string s;
    cin >> s;
    
    int res = 0;
    for(int i = 0; i < s.length(); i++) {
    	res += hash[s[i]];
    }
    
    cout << res << endl;
    return 0;
}
