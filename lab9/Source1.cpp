#include <iostream>
#include <string>
using namespace std;
typedef string Array[10];
Array A;
string str_without_3rep(string, Array);
int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    string new_str= str_without_3rep(str, A);
    cout << "Resulting string: " << new_str << endl;
    system("pause");
}
string str_without_3rep(string str, Array arr) 
{
    str = str + " "; 
    string delim = " "; 
    size_t pos = str.find(delim); 
    string word; 
    string new_str = ""; 
    int k = 0;
    while (pos != string::npos) 
    {
        word = str.substr(0, pos);
        arr[k] = word;
        k++;
        str.erase(0, pos + 1);
        pos = str.find(delim);
    }
    int t = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    t++;
                }
            }               
        }
        if (t<2) 
        {
            new_str+= arr[i] + " ";
        }
        t = 0;
    }
    return new_str;
}