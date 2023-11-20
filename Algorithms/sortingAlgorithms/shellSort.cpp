#include <iostream>
using namespace std;

struct Student {
    int rollNumber;
    string name;
};

void shellSort(Student arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            Student temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap].rollNumber > temp.rollNumber; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void printArray(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Roll Number: " << arr[i].rollNumber << ", Name: " << arr[i].name << endl;
    }
}

int main() {
    const int size = 5;
    Student students[size] = {
        {101, "Alice"},
        {103, "Bob"},
        {102, "Charlie"},
        {105, "David"},
        {104, "Eve"}
    };

    cout << "Before sorting:" << endl;
    printArray(students, size);

    shellSort(students, size);

    cout << "\nAfter sorting:" << endl;
    printArray(students, size);

    return 0;
}
