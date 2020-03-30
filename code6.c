/**
 * 6. Z 字形变换
 * */
#include<stdio.h>
#include<stdlib.h>
char * convert(char * s, int numRows){
    int count = 0;
    int numColumns = 0;
    for (;s[count] != '\0'; count++);
    numColumns += count / (numRows * 2 - 2) * (numRows - 1) + count % (numRows * 2 - 2)? 1: 0;
       
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
