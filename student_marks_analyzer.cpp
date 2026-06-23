#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];
    int sum = 0;

    cout << "Enter marks:\n";

    for(int i = 0; i < n; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    sort(marks, marks + n, greater<int>());

    cout << "\nTop 3 Marks:\n";

    for(int i = 0; i < 3 && i < n; i++)
        cout << marks[i] << endl;

    double average = (double)sum / n;

    cout << "\nAverage Marks = " << average;

    return 0;
}
