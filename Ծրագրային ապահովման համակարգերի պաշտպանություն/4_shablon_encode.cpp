#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(char& ch, string& text){
  int left = 0;
  int right = text.length()-1;
  while(left<=right){
    int mid = (left+right)/2;
    
    if (text[mid]==ch) return mid;
    else if (text[mid]>ch) right = mid-1;
    else left = mid+1;
  }
  return -1;
  
}

string encode(string& str, string& alphabet1, string& alphabet2){
  string encoded = "";
   for(int i=0; i<str.length();i++){
     int index = binary_search(str[i], alphabet1);
     if (index!=-1)
        encoded += (alphabet2[index]);
    else{
        cout<<index<<endl;
    }
   }
  return encoded;
}


int main()
{
    string str = "barev";
    string alphabet1 = "abcdefghijklmnopqrstuvwxyz";
    string alphabet2 = alphabet1;
    random_shuffle(alphabet2.begin(), alphabet2.end());
  
    cout << "alphabet1: " << alphabet1 << endl;
    cout << "shuffled : " << alphabet2 << endl;
    
    string encoded = encode(str, alphabet1, alphabet2);
    cout << "text   : " << str << endl;
    cout << "encoded: " << encoded << endl;

    return 0;
}
