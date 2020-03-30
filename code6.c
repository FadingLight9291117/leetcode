/**
 * 6. Z 字形变换
 * */
#include <stdio.h>
#include <stdlib.h>
char *convert(char *s, int numRows)
{
    int count = 0;
    int numColumns = 0;
    for (; s[count] != '\0'; count++)
        ;
    numColumns += count / (numRows * 2 - 2) * (numRows - 1);
    if (count % (numRows * 2 - 2) * (numRows - 1) == 0)
        ;
    else if (count % (numRows * 2 - 2) > 0 && count % (numRows * 2 - 2) <= numRows)
        numColumns++;
    else
        numColumns += count % (numRows * 2 - 2) - numRows + 1;
    /* count and numColumns have no problems */

    // 计算每个数的地址
    char *result = (char *)malloc(sizeof(char) * count);
    int k = 0;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numColumns; j++)
        {

        }
    }
}

int main(int argc, char const *argv[])
{
    char *str = "LEETCODEISHIRING";
    convert(str, 4);
    return 0;
}
