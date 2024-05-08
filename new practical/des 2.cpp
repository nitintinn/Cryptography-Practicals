#include <iostream>
#include <bitset>

// Expansion permutation table (E)
const int E_TABLE[] = {32, 1, 2, 3, 4, 5,
                        4, 5, 6, 7, 8, 9,
                        8, 9, 10, 11, 12, 13,
                        12, 13, 14, 15, 16, 17,
                        16, 17, 18, 19, 20, 21,
                        20, 21, 22, 23, 24, 25,
                        24, 25, 26, 27, 28, 29,
                        28, 29, 30, 31, 32, 1};

// Permutation Function (P) table
const int P_TABLE[] = {16, 7, 20, 21, 29, 12, 28, 17,
                        1, 15, 23, 26, 5, 18, 31, 10,
                        2, 8, 24, 14, 32, 27, 3, 9,
                        19, 13, 30, 6, 22, 11, 4, 25};

// S-box function
// Dummy implementation for demonstration
std::bitset<32> sBox(std::bitset<48> input) {
    std::bitset<32> output;
    // Dummy S-box operation
    for (int i = 0; i < 32; ++i) {
        output[i] = input[i] ^ input[i + 16]; // XOR operation, just an example
    }
    return output;
}

// Expansion permutation function
std::bitset<48> expansionPermutation(std::bitset<32> input) {
    std::bitset<48> output;
    for (int i = 0; i < 48; ++i) {
        output[i] = input[E_TABLE[i] - 1]; // E table permutation
    }
    return output;
}

// Permutation function
std::bitset<32> permutation(std::bitset<32> input) {
    std::bitset<32> output;
    for (int i = 0; i < 32; ++i) {
        output[i] = input[P_TABLE[i] - 1]; // P table permutation
    }
    return output;
}

int main() {
    // Example input
    std::bitset<32> input32("11001100110011001100110011001100");
    
    // Expansion permutation
    std::bitset<48> expanded = expansionPermutation(input32);
    
    // S-box operation
    std::bitset<32> sBoxOutput = sBox(expanded);
    
    // Permutation function
    std::bitset<32> permutedOutput = permutation(sBoxOutput);
    
    // Output results
    std::cout << "Input:       " << input32 << std::endl;
    std::cout << "Expanded:    " << expanded << std::endl;
    std::cout << "S-box out:   " << sBoxOutput << std::endl;
    std::cout << "Permuted:    " << permutedOutput << std::endl;
    
    return 0;
}

