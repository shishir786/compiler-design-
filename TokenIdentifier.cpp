#include <bits/stdc++.h>
using namespace std;

const int MAX_WORDS = 1000;
string words[MAX_WORDS];
string identifier[MAX_WORDS];
string puntuation[MAX_WORDS];
string keyword[MAX_WORDS];
string constant[MAX_WORDS];
string operators[MAX_WORDS];
int i = 0;
int a,b,c,d,e;
string input;

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

bool isNumber(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

bool starts_with_double_quotes(std::string str) {
    if (str[0] == '\"') {
        return true;
    } else {
        return false;
    }
}

void check(string input[]){
    cout << "\nTokens read from file: " << endl;
        for (int j = 0; j < i; j++)
        {
            if (words[j] == "x"|| words[j] == "y"|| words[j] == "z" || words[j] =="add"|| words[j] == "cout"|| words[j] =="cin" || words[j] =="print")
            {
                identifier[a]= words[j];
                a++;
            }
            if (words[j] == "(" || words[j] == ")" || words[j] == "{" || words[j] == "}" || words[j] == "[" || words[j] == "]")
            {
                puntuation[b]= words[j];
                b++;
            }
            if (words[j] == "if" || words[j] == "else" || words[j] == "for" || words[j] == "while" || words[j] =="return" || words[j] == "int" || words[j] == "float" || words[j] =="string")
            {
                keyword[c]= words[j];
                c++;
            }
            if (isNumber(words[j]) || starts_with_double_quotes(words[j]) ) 
            {
                constant[d]= words[j];
                d++;
            }
            if (words[j] == "+" || words[j] == "-" || words[j] == "*" || words[j] == "/")
            {
                operators[e]= words[j];
                e++;
            }
        }
}

void print(){
    cout <<"Identifiers :";
    for(int i=0; i<a; i++){
        cout <<identifier[i] << ", ";
    }

    cout <<"\nPuntuations :";
    for(int i=0; i<b; i++){
        cout <<puntuation[i] << ", ";
    }

    cout <<"\nKeywords : " ;
    for(int i=0; i<c; i++){
        cout  <<keyword[i] << ", ";
    }

    cout <<"\nConstants : ";
    for(int i=0; i<d; i++){
        cout <<constant[i] << ", ";
    }

    cout <<"\nOperators : ";
    for(int i=0; i<e; i++){
        cout <<operators[i] << ", ";
    }
    cout << endl;
}

int main()
{
    cout << "give the file name to read : " ;
    cin >> input;
    int numWords = readWordsFromFile(input, words);

    if (numWords > 0)
    {
    check(words);
    }

    print();

    return 0;
}
