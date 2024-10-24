#include <iostream>

int SumOfOddIndexedElements(int a[], int n) {
    int sum = 0;
    for (int i = 1; i < n; i += 2) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int n;


    std::cout << "Masuv: ";
    std::cin >> n;


    int* a = new int[n];


    std::cout << "Elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }


    int sum = SumOfOddIndexedElements(a, n);


    std::cout << "SUM: " << sum << std::endl;


    delete[] a;

    return 0;
}

