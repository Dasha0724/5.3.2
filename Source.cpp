#include <iostream>
#include <ctime>
#include <list>

using namespace std;

void Fill(list<int>& l, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        int q = rand() % 20;
        l.push_back(q);
    }
}

void Print(const list<int>& l) {
    for (int elements : l) {
        cout << elements << ' ';
    }
    cout << endl;
}

int Result(list<int>& l, int n) {
    int Sum = 0;
    auto front = l.begin();
    auto back = l.rbegin();

    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; i++) {
            Sum += (*front) * (*back);
            ++front;
            ++back;
        }
    }
    else{
        for (int i = 0; i <= n / 2; i++) {
            Sum += (*front) * (*back);
            ++front;
            ++back;
        }
    }
    return Sum;
}

int main() {
    cout << "Enter n: ";
    int n;
    cin >> n;

    list<int> l;
    Fill(l, n);
    Print(l);

    cout << "Result: " << Result(l, n) << endl;

    return 0;
}
