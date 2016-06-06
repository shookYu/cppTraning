/*
 * =====================================================================================
 *
 *       Filename:  input_test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年06月05日 22时15分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  shookYu (), yujun2018@163.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
    int    i = 0;
    char   c = 0;
    char *ps = NULL;
    
    ps = (char *)malloc(10);
     
    printf("pls input a char:\n");
    c = getchar(); 
    printf("get a char:%c\n",c);
    
    printf("pls input a number:\n");
    scanf("%d",&i); 
    printf("get a number:%d\n",i);

    printf("pls input a string\n");
    scanf("%s",ps); 
    printf("get a string:%s\n",ps);
    
    free(ps);
    return 0;
}

