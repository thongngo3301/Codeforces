#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n, pRead, cRead;
    cin >> n;
    int cLength = 0;
    int mLength = 0;
    cin >> pRead;
    for (int i = 1; i < n; i++) {
        cin >> cRead;
        if (pRead < cRead) {
            cLength++;
            mLength = max(cLength, mLength);
        }
        else {
            cLength = 0;
        }
        pRead = cRead;
    }
    cout << mLength + 1;
    return 0;
}
