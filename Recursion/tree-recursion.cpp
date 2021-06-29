#include <iostream>
using namespace std;

int fun(int n) {
    
    if (n > 0) {
    cout << n << " ";
    fun(n - 1);
    fun(n - 1);
    }
}


int main() {
    int n = 3;
    fun(n);
    return 0;
}