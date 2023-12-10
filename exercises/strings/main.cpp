#include <iostream>

using namespace std;

int main()
{
    // 1. Concatenate two strings
    // string s1, s2;
    // cin >> s1 >> s2;
    // size_t maxSize = s1.size();
    // if (s2.size() > maxSize)
    //     maxSize = s2.size();
    // for (size_t i = 0; i < maxSize; i++)
    // {
    //     if (i < s1.size())
    //         cout << s1[i];
    //     if (i < s2.size())
    //         cout << s2[i];
    // }

    // 2. Letters Frequency
    // string s;
    // cin >> s;
    // int letters[26] = {0};
    // for (size_t i = 0; i < s.size(); i++)
    // {
    //     letters[s[i] - 'a']++;
    // }
    // for (size_t i = 0; i < 26; i++)
    // {
    //     if (letters[i] > 0)
    //         cout << (char)(i + 'a') << " " << letters[i] << endl;
    // }

    // 3. Special string mapping
    // string s;
    // cin >> s;
    // string from = "abcdefghijklmnopqrstuvwxyz0123456789";
    // string to = "YZIMNESTODUALBCFGHJKPQRVWX!@#$%^&*()_+";
    // char letter_map[150] = {0};

    // 4. Is Prefix
    // string s1, s2;
    // cin >> s1 >> s2;
    // bool isPrefix = true;
    // for (size_t i = 0; i < s2.size(); i++)
    // {
    //     if (s1[i] != s2[i])
    //     {
    //         isPrefix = false;
    //         break;
    //     }
    // }
    // cout << (isPrefix ? "Yes" : "No") << endl;

    // 5. Is Suffix
    // string s1, s2;
    // cin >> s1 >> s2;
    // bool isSuffix = true;
    // for (size_t i = 0; i < s2.size(); i++)
    // {
    //     if (s1[s1.size() - s2.size() + i] != s2[i])
    //     {
    //         isSuffix = false;
    //         break;
    //     }
    // }
    // cout << (isSuffix ? "Yes" : "No") << endl;

    // 6. Is Substring
    // string s1, s2;
    // cin >> s1 >> s2;
    // bool isSubstring = false;
    // for (size_t i = 0; i < s1.size(); i++)
    // {
    //     if (s1[i] == s2[0])
    //     {
    //         bool isMatch = true;
    //         for (size_t j = 0; j < s2.size(); j++)
    //         {
    //             if (s1[i + j] != s2[j])
    //             {
    //                 isMatch = false;
    //                 break;
    //             }
    //         }
    //         if (isMatch)
    //         {
    //             isSubstring = true;
    //             break;
    //         }
    //     }
    // }
    // cout << (isSubstring ? "Yes" : "No") << endl;

    // 7. Is Subsequence
    // string s1, s2;
    // cin >> s1 >> s2;
    // bool isSubsequence = false;
    // size_t j = 0;
    // for (size_t i = 0; i < s1.size(); i++)
    // {
    //     if (s1[i] == s2[j])
    //         j++;
    //     if (j == s2.size())
    //     {
    //         isSubsequence = true;
    //         break;
    //     }
    // }
    // cout << (isSubsequence ? "Yes" : "No") << endl;

    // 8. Convert to number
    // string s;
    // cin >> s;
    // int number = 0;
    // for (size_t i = 0; i < s.size(); i++)
    // {
    //     number = number * 10 + (s[i] - '0');
    // }

    // cout << number << ' ' << number * 3 << endl;

    // 9. Grouping
    string s;
    cin >> s;
    int letters[26] = {0};
    for (size_t i = 0; i < s.size(); i++)
    {
        if (i != 0 && s[i] != s[i - 1])
            cout << " ";
        cout << s[i];
    }

        return 0;
}