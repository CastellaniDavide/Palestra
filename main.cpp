#include <bits/stdc++.h>

using namespace std;

int main() {
    // le seguenti due righe possono essere utili per leggere e scrivere da file

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;

        // scrivi in questa variabile la soluzione
        long long sol = 0;

        for (int i = 0; i < N; i++) {
            int A;
            cin >> A;
            if(A>0)
                sol+=A;
            // il valore A rappresenta il valore di incremento dell'i-esimo esercizio
        }

        cout << "Case #" << t << ": " << sol << endl;
    }
}
