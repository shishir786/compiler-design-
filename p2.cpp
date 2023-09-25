#include <bits/stdc++.h>
using namespace std;

    int flag = -1;
    string arr[5];


int main() {

    string input;

    cin >> input;

    for (char c : input) {
        if (c =='+'||c =='-' || c =='*' || c =='/')  {
            flag++;
            arr[flag] = c;
        }
    }


    for(int i = 0; i <=flag; i++) {
        cout << "Operator "<<i+1<<" :" << arr[i] << endl;
    }


return 0;
}