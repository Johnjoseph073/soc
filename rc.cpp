#include <iostream>
#include <vector>
#include <algorithm>

int maximumCustomers(std::vector<int>& arrivalTimes, std::vector<int>& departureTimes) {
    std::sort(arrivalTimes.begin(), arrivalTimes.end());
    std::sort(departureTimes.begin(), departureTimes.end());

    int maxCustomers = 0;
    int currentCustomers = 0;
    int i = 0;
    int j = 0;

    while (i < arrivalTimes.size() && j < departureTimes.size()) {
        if (arrivalTimes[i] <= departureTimes[j]) {
            ++currentCustomers;
            ++i;
        } else {
            --currentCustomers;
            ++j;
        }

        maxCustomers = std::max(maxCustomers, currentCustomers);
    }

    return maxCustomers;
}

int main() {
    int n;
    std::cout << "Enter the number of customers: ";
    std::cin >> n;

    std::vector<int> arrivalTimes(n);
    std::vector<int> departureTimes(n);

    std::cout << "Enter the arrival times: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arrivalTimes[i];
    }

    std::cout << "Enter the departure times: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> departureTimes[i];
    }

    int maxCustomers = maximumCustomers(arrivalTimes, departureTimes);

    std::cout << "Maximum number of customers: " << maxCustomers << std::endl;

    return 0;
}
