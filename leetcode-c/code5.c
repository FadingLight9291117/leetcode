// 最长回文子串
#include <stdio.h>
#include<stdlib.h>
char *longestPalindrome(char *s)
{
    if (strlen(s) == 0 || strlen(s) == 1)
        return s;
    char *p = s;
    char *left;
    char *right;
    int maxNum = 1;
    char *result = s;
    while (*p != '\0')
    {
        left = p - 1;
        right = p + 1;
        int num = 1;
        while (left != s - 1 && *right != '\0' && *left == *right)
        {
            num += 2;
            left--;
            right++;
        }
        if (num > maxNum)
        {
            maxNum = num;
            result = left + 1;
        }
        if (*(p + 1) != '\0' && *p == *(p + 1))
        {
            int num = 2;
            left = p - 1;
            right = p + 2;
            while (left != s - 1 && right != '\0' && *left == *right)
            {
                num += 2;
                left--;
                right++;
            }
            if (num > maxNum)
            {
                maxNum = num;
                result = left + 1;
            }
        }
        p++;
    }
    *(result + maxNum) = '\0';
    return result;
}
int main()
{
    char s[] = "reerrfdsas1";
    char *result = longestPalindrome(s);
    while (*result != '\0')
    {
        printf("%c", *(result++));
    }
    return 0;
}