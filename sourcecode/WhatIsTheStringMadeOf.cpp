#include <iostream>
#include <map> 
using namespace std;

int main()
{
    map<char, int> hash;
    
    // entry
    int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    for(int i = 0; i < 10; i++) {
    	hash[i + 48] = arr[i];
    }
    
    string s;
    cin >> s;
    
    int res = 0;
    for(int i = 0; i < s.length(); i++) {
    	res += hash[s[i]];
    }
    
    cout << res << endl;
    return 0;
}
