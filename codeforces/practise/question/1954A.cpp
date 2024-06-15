#include <iostream>

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, m, k;
        std::cin >> n >> m >> k;

        double max_color = static_cast<double>(n + m - 1) / m;

        if (max_color + k >= n) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
        }
    }

    return 0;
}
