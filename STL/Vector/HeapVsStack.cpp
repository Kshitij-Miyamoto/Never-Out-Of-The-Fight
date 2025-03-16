#include <iostream>
#include <vector>
#include <chrono>  // For timing

using namespace std;
using namespace chrono;

const int N = 100000;  // 1 million elements

void stackArray() {
    int arr[N];  // Stack allocation
    for (int i = 0; i < N; i++) {
        arr[i] = i;  // Simple operation
    }
    cout << "Stack array processed." << endl;
}

void heapArray() {
    int* arr = new int[N];  // Heap allocation
    for (int i = 0; i < N; i++) {
        arr[i] = i;  // Simple operation
    }
    delete[] arr;  // Free memory
    cout << "Heap array processed." << endl;
}

void vectorArray() {
    vector<int> arr;  
    arr.reserve(N);  // Avoid multiple reallocations
    for (int i = 0; i < N; i++) {
        arr.push_back(i);
    }
    cout << "Vector processed." << endl;
}

int main() {
    auto start = high_resolution_clock::now();
    stackArray();
    auto end = high_resolution_clock::now();
    cout << "Stack Time: " << duration_cast<milliseconds>(end - start).count() << " ms\n";

    start = high_resolution_clock::now();
    heapArray();
    end = high_resolution_clock::now();
    cout << "Heap Time: " << duration_cast<milliseconds>(end - start).count() << " ms\n";

    start = high_resolution_clock::now();
    vectorArray();
    end = high_resolution_clock::now();
    cout << "Vector Time: " << duration_cast<milliseconds>(end - start).count() << " ms\n";

    return 0;
}
