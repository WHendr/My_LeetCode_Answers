//345. Reverse Vowels of a String
class Solution {
public:

    bool isVowel(char s)
    {
        char letter = tolower(s);
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
            return true;
        else
            return false;
    }


    string reverseVowels(string s) 
    {
        int len = s.length();
        int i = 0, j = len - 1;
        while(i != j && i < j)
        {
            if(isVowel(s[i]) && isVowel(s[j]))
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;

            } 
            else if(!isVowel(s[i]) && isVowel(s[j]))
            {
                i++;
            }
            else if(isVowel(s[i]) && !isVowel(s[j]))
            {
                j--;
            }
            else
            {
                i++;
                j--;
            }
        }
        return s;
    }
};
