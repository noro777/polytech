#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n = 5;
    int arr [n+1];
    for(int i=0; i<n+1; i++){
        arr[i] = i+1;
    }
    random_shuffle(arr, arr+n+1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = (n+1)*(n+2)/2;
    int total_sum = 0;
    for(int i=0; i<n; i++){
        total_sum+=arr[i];
    }
    cout<<"Բացակայող համարը: " << sum - total_sum << endl;

    return 0;
}
