#include <bits/stdc++.h>

int main(int argc, char* argv[]) {

    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    /* get the test_case */
    size_t test_case;
    std::cin >> test_case;

    /* navigate through each test_case */
    while(test_case--) {

        /* get the number */
        size_t number;
        std::cin >> number;

        /* compute the square root of number */
        size_t square_root = std::sqrt(number);

        /* print the square_root of number
         * rounded down to nearest integer */
        std::cout << square_root << std::endl;
    }
    return 0;
}