#include <iostream>
using namespace std;

string encode(string& t, int& k){
    string encoded;
    for (int i=0; i<t.length(); i++){
        encoded += t[i]+k;
    }
    return encoded;
}

string decode(string& t, int& k){
    string decoded;
    for (int i=0; i<t.length(); i++){
        decoded += t[i]-k;
    }
    return decoded;
}


int main(){
    string t;
    cout << "Գրեք tեքսtը: "; getline(cin, t);
    int k = 3;
    
    string encoded = encode(t, k);
    cout << "Կոդավորված: " << encoded << endl;
    
    string decoded = decode(encoded, k);
    cout << "Վերծանված: " << decoded << endl;
    
    return 0;
}
