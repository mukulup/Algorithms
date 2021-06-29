#include <iostream>
using namespace std;

int TOH(int n, int A, int B, int C)
{
    if (n > 0) {
        TOH(n - 1, A, B, C);
        cout << "(" << A << "," << C << ")" << endl;
        TOH(n - 1, B, A, C);
    }
}

int main() {

    int n {5};

    TOH(n, 1, 2, 3);

}