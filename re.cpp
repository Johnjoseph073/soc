#include <iostream>
#include <string>

int main() {
    std::string sequence;
    std::cin >> sequence;

    int max_repetition = 1;
    int current_repetition = 1;

    for (int i = 1; i < sequence.length(); i++) {
        if (sequence[i] == sequence[i - 1]) {
            current_repetition++;
        } else {
            max_repetition = std::max(max_repetition, current_repetition);
            current_repetition = 1;
        }
    }

    max_repetition = std::max(max_repetition, current_repetition);

    std::cout << max_repetition << std::endl;

    return 0;
}
