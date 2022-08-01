// Travis Cassell
// CS 413
// Binomial Coefficient
// Recursive n choose k
//
// Used to find the number of ways of selecting k different things from n different things
// The n choose k formula also known as combinations formula
// C (n , k) = n! / [ (n-k)! k! ]
// https://www.cuemath.com/n-choose-k-formula/

#include <iostream>
using namespace std;

int nChoosek(int n, int k);

int main(int argc, const char * argv[]) {
    
    // cout << nChoosek(8, 3) << endl;
    cout << nChoosek(15, 3) << endl;

    
    return 0;
}

int nChoosek(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    else {
        return nChoosek(n - 1, k) + nChoosek(n - 1, k - 1);
    }
}
