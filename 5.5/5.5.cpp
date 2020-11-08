#include<iostream>

using namespace std;

int a = 0;

int C(int k, int n) {

    a++;

    if (k == n || k == 0) {
        return 1;
    }
    return (C(k - 1, n - 1) + C(k, n - 1));
}


int main() {
    cout << C(3, 7);
    cout << "\n" << a;

    cout << endl;
    system("pause");
}