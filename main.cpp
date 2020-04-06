#include <iostream>

using namespace std;

int main() {

    int n, t;
    cin >> n >> t;
    int books[n];
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }


    int bookss = 0;
    for (int i = 0; i < n; i++) {
        int time = t;
        int max = 0;

        if (books[i] > time) {

        } else {
            max += 1;
            time -= books[i];


            for (int k = i + 1; k < n; k++) {
                if (books[k] > time) {
                    break;

                } else {
                    max += 1;
                    time -= books[k];
                }
            }

        }

        if (max > bookss) {
            bookss = max;
        }


    }
    cout << bookss;
    return 0;
}
