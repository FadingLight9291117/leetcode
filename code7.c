/**
 * 整数反转
 * */
#include <stdio.h>
#include <stdlib.h>
int reverse(int x)
{
    int r = 0;
    for (; x != 0; x /= 10)
    {
        if ((r == 214748364 && x % 10 > 7) || r > 214748364 || (r == -214748364 && x % 10 > 8) || r < -214748364)
            return 0;
        r = r * 10 + x % 10;
    }
    return r;
}
int main()
{
    int x = 746384741;
    int y = reverse(x);
    printf("%d", y);
    return 0;
}