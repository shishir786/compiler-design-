#include <bits/stdc++.h>
using namespace std;

const int MAX_WORDS = 1000;
string words[MAX_WORDS];
string fx[MAX_WORDS];
string op1[MAX_WORDS];

string vv[50];

int i = 0;
int a,b,c;

string input;

int f = 0;
int op =0;

int readWordsFromFile(string filename, string words[])
{
    ifstream file(filename);
    if (file.is_open())
    {
        string word;
        while (file >> word)
        {
            words[i++] = word;
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file." << endl;
        return -1;
    }
    return i;
}




void check(string input[]){

    cout << "\nTokens read from file: " << endl;
        for (int j = 0; j < i; j++)
        {
            if (words[j] == "div" || words[j] == "add"|| words[j] == "sub"  && words[j+1] == "(" && words[j+2] == "int" || words[j+2] == "float" || words[j+2] == "double" || words[j+2]=="string" || words[j+2]=="char")
            {
                a++;
                vv[a]= words[j];
                f++;
            }
            if (words[j] == "+" || words[j] == "-" || words[j] == "*" || words[j] == "/" )
            {
                b++;
                op1[b]= words[j];
                op++;
            }


        }
}



void print(){
    cout <<"Functions :" << endl;
    for(int i=1; i<=a; i++){
        cout << "function "<< i <<" : " <<vv[i] << endl;
    }
    cout<<"total function : "<< f <<endl;

    cout <<"\n Operators :" << endl;
    for(int i=1; i<=b; i++){
        cout << "operator "<< i <<" : " <<op1[i] << endl;
    }
    cout<<"total operator : "<< op <<endl;

    cout << endl;
}



int main()
{
    cout << "give the file name to read(txt) : " ;
    cin >> input;
    int numWords = readWordsFromFile(input, words);

    if (numWords > 0)
    {
    check(words);
    }

    print();

    return 0;
}
