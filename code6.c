/**
 * 6. Z 字形变换
 * */
#include <stdio.h>
#include <stdlib.h>
char *convert(char *s, int numRows)
{
    if (numRows == 1 || numRows == 0) return s;
    int count = 0, numColumns = 0, inc = numRows * 2 - 2;// inc 周期增量
    // 算元素个数
    for (; s[count] != '\0'; count++);
    // 算列数
    numColumns += count / inc * (numRows - 1);
    if (count % inc > 0 && count % inc <= numRows)  numColumns++;
    else if (count % inc > numRows) numColumns += count % inc - numRows + 1;

    // 计算每个数的地址
    char *result = (char *)malloc(sizeof(char) * (count + 1));
    result[count] = '\0';
    int k = 0;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = i; j < count;)
        {
            if (i != numRows - 1)
            {
                result[k++] = s[j];
                j += (numRows - i) * 2 - 2;
            }
            if (j >= count) break;
            result[k++] = s[j];
            j += i != 0 ? i * 2 : numRows * 2 - 2;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    char *str = "PAYPALISHIRING";
    char *s = convert(str, 3);
    while (*s != '\0')
    {
        printf("%c", *s);
        s++;
    }
    return 0;
}
