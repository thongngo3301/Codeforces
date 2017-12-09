#include <iostream>

using namespace std;

int main(){
    int n, count=1, tmpCount=1;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
            if (arr[i] >= arr[i - 1])
            {
                tmpCount++;
                count = max(tmpCount, count);
            }
            else
                tmpCount = 1;
    }

    cout << count << endl;
    return 0;
}
