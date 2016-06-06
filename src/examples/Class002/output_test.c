/*
 * =====================================================================================
 *
 *       Filename:  output_test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年06月05日 20时35分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc ,char *argv[])
{
    char  c = 'a';
    int   i = 10;
    char *s = "hello world";
    int  *p = &i;
    
    printf("c=%c\n",c);
    printf("i=%d\n",i);
    printf("i=%x\n",i);
    printf("i=%o\n",i);
    printf("s=%s\n",s);
    printf("p=%p\n",p);
    
    return 0;
    
}

