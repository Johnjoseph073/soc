#include <iostream>
#include <set>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::multiset<int> ticketPrices;
    for (int i = 0; i < n; ++i) {
        int price;
        std::cin >> price;
        ticketPrices.insert(price);
    }

    for (int i = 0; i < m; ++i) {
        int customerPrice;
        std::cin >> customerPrice;

        auto it = ticketPrices.upper_bound(customerPrice);
        if (it == ticketPrices.begin()) {
            std::cout << -1 << std::endl;
            continue;
        }

        --it;
        std::cout << *it << std::endl;
        ticketPrices.erase(it);
    }

    return 0;
}
//here we are using multiset so that the array is in the sorted manner from the start itself
//we use upper bound whic is the best thing
//if we define a vector and then do sort then the time is more and exceeds the time limit