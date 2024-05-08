#include <iostream>
#include <bitset>
#include <vector>
#include <sstream>


using namespace std;

// Initial permutation (IP) table
const int IP[] = {58, 50, 42, 34, 26, 18, 10, 2,
                  60, 52, 44, 36, 28, 20, 12, 4,
                  // ... (remaining IP table entries)
                  57, 49, 41, 33, 25, 17, 9, 1};

// Example DES function for encryption
void desEncrypt(const bitset<64>& plaintext, const bitset<56>& key) {
    // Apply initial permutation (IP) to plaintext
    bitset<64> permutedPlaintext;
    for (int i = 0; i < 64; ++i) {
        permutedPlaintext[i] = plaintext[IP[i] - 1];
    }

    // ... (continue with other DES steps: key generation, rounds, etc.)

    cout << "Encrypted ciphertext: " << permutedPlaintext << endl;
}

int main() {
    const char* charVar = "29"; // Your string value
    std::stringstream strValue(charVar);
    unsigned int uintVar;
    strValue >> uintVar;

    std::cout << "Converted value: " << uintVar << std::endl;
    return 0;
}

