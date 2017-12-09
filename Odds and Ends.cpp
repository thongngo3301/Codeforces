#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }
    bool ans = true;
    if (n%2 == 0) ans = false;
    else if (a[0] % 2 == 0) ans = false;
    else if (a[n-1] % 2 == 0) ans = false;
    if (ans) cout << "Yes";
    else cout << "No";
    return 0;
}
