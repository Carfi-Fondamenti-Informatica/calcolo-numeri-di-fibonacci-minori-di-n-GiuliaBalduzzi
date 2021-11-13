#include <iostream>
using namespace std;

int main() {
    int  n, x=0, y=1, z= x+y;
    cin >> n;
    cout << z << endl;
    for (int i=2; i <= n; i++){
        z = x + y;
        x = y;
        y = z;
        cout << z << endl;
    }
    return 0;
}
