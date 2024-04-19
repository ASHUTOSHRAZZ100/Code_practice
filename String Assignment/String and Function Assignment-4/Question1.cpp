#include <iostream>
using namespace std;

int countVowel(char *);
int main()
{

    char str[20];
    cout << "Enter the string " << endl;
    fgets(str, 20, stdin);
    int count = countVowel(str);
    cout << "Vowels are  = " << count << endl;
    cout << endl;
    return 0;
}

int countVowel(char *s)
{
    int i = 0, count = 0;
    char vowel[11] = "aeiouAEIOU";
    for (i = 0; s[i]; i++)
        ;
    s[--i] = '\0';

    for (i = 0; s[i]; i++)
        for (int j = 0; vowel[j]; j++)
            if (s[i] == vowel[j])
                count++;
    return count;
}