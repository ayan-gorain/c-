void printPat(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= 1; j--) {
            for (int k = 0; k < i; k++) {
                cout << j << " ";
            }
        }
        cout << "$";
    }
}