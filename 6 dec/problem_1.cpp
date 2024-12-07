#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }
        
        int current_length = 0, count = 0;
        for (int i = 0; i < n; i++) {
            int word_length = words[i].size();
            if (current_length + word_length <= m) {
                current_length += word_length;
                count++;
            } else {
                break;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
