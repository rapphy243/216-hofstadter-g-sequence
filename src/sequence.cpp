#include <vector>

int naiveSequence(int n) {
    if (n <= 0) {
        return 0;
    }
    return n - naiveSequence((naiveSequence(n - 1)));
}

int optimizedSequence(int n, std::vector<int>& arr) {
    if (n <= 0) {
        return 0;
    }

    if (arr[n] != -1) {
        return arr[n];
    }

    int value = optimizedSequence(optimizedSequence(n - 1, arr), arr);

    arr[n] = n - value;
    return arr[n];
}

int optimizedSequence(int n) {
    if (n <= 0) {
        return 0;
    }

    std::vector<int> arr(n + 1, -1);
    arr[0] = 0;

    return optimizedSequence(n, arr);
}
