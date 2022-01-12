#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int l;
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t, ans[h];
    getline(cin, t);
    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);
        ans[i] = row;
    }
    int lenT = t.length();
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < lenT; j++) {
            for (int k = 0; k < l; k++) {
                int n = toupper(t[j]) - 'A';
                if(n < 0 || n >= 26) n = 26;
                cout << ans[i][n * l + k];
            }
        }
        cout << endl;
    }
}
