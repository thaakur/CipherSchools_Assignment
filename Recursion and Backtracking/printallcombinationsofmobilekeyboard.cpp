#include <bits/stdc++.h>
using namespace std;

const string phoneDigits[10]
    = { "",    "",    "abc",  "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz" };

void printWordsHelper(int numbers[], int n, int numberIndex=0, string result=""){

    if(n <= 0){
        cout<<result<<" ";
        return;
    }

    string words = phoneDigits[numbers[numberIndex]];
    if(words.length() == 0)
        printWordsHelper(numbers, n - 1, numberIndex + 1, result);

    for(int i = 0 ; i < words.length() ; i++)
        printWordsHelper(numbers, n - 1, numberIndex + 1, result + words[i]);
}
void printWords(int numbers[],int n){
    printWordsHelper(numbers, n);
    cout<<endl;
}

int main(void)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    printWords(a, n);
    return 0;
}
