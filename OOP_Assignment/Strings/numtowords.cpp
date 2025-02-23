#include <iostream>
#include <string>

std::string convertToWords(int num) {
    std::string belowTwenty[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                                 "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", 
                                 "Eighteen", "Nineteen"};
    std::string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    if (num < 20) {
        return belowTwenty[num];
    } else {
        return tens[num / 10] + (num % 10 != 0 ? " " + belowTwenty[num % 10] : "");
    }
}

int main() {
    int num;
    std::cout << "Enter a non-negative integer (0-99): ";
    std::cin >> num;

    if (num < 0 || num > 99) {
        std::cout << "Number out of range!" << std::endl;
    } else {
        std::cout << "In words: " << convertToWords(num) << std::endl;
    }

    return 0;
}
