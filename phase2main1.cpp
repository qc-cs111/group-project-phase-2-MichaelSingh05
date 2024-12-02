#include <iostream>
#include <algorithm>
using namespace std;

void printChart(int h[], char c[], int cap, int max) {
        for (int i = 0; i < cap; i++) {
                cout << c[i] << ": ";
                for (int j = 0; j < h[i]; j++) {
                        cout << "*";
                }
                cout << endl;
        }
}

void swap(int h[], char c[], int a, int b) {
        int temp = h[a];
        h[a] = h[b];
        h[b] = temp;
        char temp2 = c[a];
        c[a] = c[b];
        c[b] = temp2;
}

int main() {
        int h[6];
        char c[6];
        cout << "Please enter six non-negative integers." << endl;
        for (int i = 0; i < 6; i++) {
                cout << "Integer #" << i << ": ";
                cin >> h[i];
        }
        cout << "Please enter six characters." << endl;
        for (int i = 0; i < 6; i++) {
                cout << "Character #" << i << ": ";
                cin >> c[i];
        }
        int max = *max_element(h, h + 6);
        for (int i = 0; i < 5; i++) {
                for (int j = i + 1; j < 6; j++) {
                        if (h[i] < h[j]) {
                                swap(h, c, i, j);
                        }
                }
        }
        printChart(h, c, 6, max);
        return 0;
}
