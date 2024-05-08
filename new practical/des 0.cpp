#include <iostream>
#include <bitset>
using namespace std;

// Initial Permutation (IP) table
const int IP[] = {58, 50, 42, 34, 26, 18, 10, 2,
                  60, 52, 44, 36, 28, 20, 12, 4,
                  62, 54, 46, 38, 30, 22, 14, 6,
                  64, 56, 48, 40, 32, 24, 16, 8,
                  57, 49, 41, 33, 25, 17, 9, 1,
                  59, 51, 43, 35, 27, 19, 11, 3,
                  61, 53, 45, 37, 29, 21, 13, 5,
                  63, 55, 47, 39, 31, 23, 15, 7};

// Function to apply Initial Permutation (IP) to plaintext
void apply_IP(const bitset<64>& plaintext, bitset<32>& L, bitset<32>& R) {
    bitset<64> permuted_plaintext;
    // Apply IP to the plaintext
    for (int i = 0; i < 64; ++i) {
        permuted_plaintext[63 - i] = plaintext[64 - IP[i]];
    }
    // Split into L and R halves
    for (int i = 0; i < 32; ++i) {
        L[i] = permuted_plaintext[i + 32];
        R[i] = permuted_plaintext[i];
    }
}

int main() {
    // Example plaintext input (64-bit)
    bitset<64> plaintext(0x0123456789ABCDEF);

    // Variables to store L and R halves
    bitset<32> L, R;

    // Apply Initial Permutation (IP) to plaintext
    apply_IP(plaintext, L, R);

    // Print L and R halves
    cout << "L: " << L.to_ulong() << endl;
    cout << "R: " << R.to_ulong() << endl;

    return 0;
}

