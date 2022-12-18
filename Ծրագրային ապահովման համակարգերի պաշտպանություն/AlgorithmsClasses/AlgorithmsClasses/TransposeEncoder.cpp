#include "TransposeEncoder.h"

TransposeEncoder::TransposeEncoder(int m, int n) {
    this->m = m;
    this->n = n;
}

string TransposeEncoder::encode(string& text, int& M, int& N) {
    /*string encoded = "";
    char arr[M][N], transpose[N][M];
    int i = 0;
    for (int m = 0; m < M; m++) {
        for (int n = 0; n < N; n++) {
            arr[m][n] = text[i++];
        }
    }

    cout << "Matrix: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << " " << arr[i][j];
            if (j == N - 1)
                cout << endl << endl;
        }
    }

    for (int m = 0; m < M; ++m)
        for (int n = 0; n < N; ++n) {
            transpose[n][m] = arr[m][n];
        }

    cout << "Transpose of Matrix: " << endl;
    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j) {
            cout << " " << transpose[i][j];
            if (j == N - 1)
                cout << endl << endl;
        }

    for (int m = 0; m < M; m++) {
        for (int n = 0; n < N; n++) {
            encoded += transpose[m][n];
        }
    }

    return encoded;*/
    return "";
}