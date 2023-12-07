#include <stdio.h>

int main(int argc, char *argv[]) {
    char All_letters[] = "abcdefghijklmnopqrstuvwxyz"; // Array containing all the letters
    int L1, L2, L3, L4; // Letters' indices in the array

    // Choose the first letter
    for (L1 = 0; L1 < 26; ++L1) {

        // Iterate through all the letters after the first letter
        // Choose the second letter
        for (L2 = 0; L2 < 26; ++L2) {
            if (L1 == L2) {
                continue; // Skip if the second letter is the same as the first letter
            }

            // Iterate through all the letters after the second letter
            // Choose the third letter
            for (L3 = 0; L3 < 26; ++L3) {
                if (L1 == L3 || L2 == L3) {
                    continue; // Skip if the third letter is the same as the first or second letter
                }

                // Iterate through all the letters after the third letter
                // Choose the fourth letter
                for (L4 = 0; L4 < 26; ++L4) {
                    if (L1 == L4 || L2 == L4 || L3 == L4) {
                        continue; // Skip if the fourth letter is the same as any of the previous letters
                    }

                    printf("%c%c%c%c\n", All_letters[L1], All_letters[L2], All_letters[L3], All_letters[L4]);
                }
            }
        }
    }

    return 0;
}