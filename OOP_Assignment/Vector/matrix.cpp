#include <iostream>
#include <vector>

void createMatrix(int n) {
    std::vector<std::vector<int> > matrix(n, std::vector<int>(n, n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the size of the matrix (n): ";
    std::cin >> n;

    createMatrix(n);

    return 0;
}
