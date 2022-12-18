#include <iostream>
#include <math.h>
using namespace std;

void get_dividers(int len, int& i, int& j){
    for (i=sqrt(len); i>=1; i--){
        if (len%i==0){
          j = len/i;
          break;
        }
    }
}

string encode(string& text, int& M, int& N){
    string encoded = "";
    char arr[M][N], transpose[N][M];
    int i = 0;
    for (int m = 0; m < M; m++){
        for (int n = 0; n < N; n++){
            arr[m][n] = text[i++];
        }
    }
    
    cout << "Մատրիցա: " << endl;
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
      
    cout << "Մատրիցայի փոխադրում: " << endl;
    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j) {
            cout << " " << transpose[i][j];
            if (j == N - 1)
                cout << endl << endl;
        }
        
    for (int m = 0; m < M; m++){
        for (int n = 0; n < N; n++){
            encoded += transpose[m][n];
        }
    }
    
    
    return encoded;
}



int main(){
    string text;
    cout << "Գրեք tեքսtը: "; getline(cin, text);
    int len = text.length();
    int m,n = 0;
    get_dividers(len, m, n);
    cout << m << ", " << n << endl;
    
    string encoded = encode(text, m, n);
    cout << "Կոդավորված: " << encoded << endl;
    
    return 0;
}
