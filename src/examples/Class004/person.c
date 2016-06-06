/*
 * =====================================================================================
 *
 *       Filename:  person.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年06月05日 23时42分34秒
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
#include "person.h"
void introduce_self(Person *p)
{
    printf("大家好，我的名字叫%10s,我是%8s孩，我今年%d岁，我的身高是%dcm，请多关照！\n",p->name,p->sex,p->age,p->height);
}

void introduce_self_name(Person *p,int pos)
{
    printf("%d!姓名：%10s!身高:%d\n",pos,p->name,p->height);
}


int main(int argc,char *argv[])
{
    Person *class01[3];
    Person zhangsan = 
    {
        .name = "zhangsan" ,
        .sex = "male" ,
        .age = 30 ,
        .height = 175 ,
        .introduce = introduce_self,
        .introduce_name = introduce_self_name
    };
    
    Person lisi = 
    {
        .name = "lisi" ,
        .sex = "male" ,
        .age = 35 ,
        .height = 168 ,
        .introduce = introduce_self,
        .introduce_name = introduce_self_name
    };
    
    Person wangmazi = 
    {
        .name = "wangmazi" ,
        .sex = "female" ,
        .age = 18 ,
        .height = 173 ,
        .introduce = introduce_self,
        .introduce_name = introduce_self_name
    };

    class01[0] = &zhangsan;
    class01[1] = &lisi;
    class01[2] = &wangmazi;
    printf("--->大家注意，下面开始自我介绍!\n");    
    for(int loop = 0;loop<(sizeof(class01)/sizeof(Person *));loop++)
    {
        Person *p = class01[loop];
        p->introduce(p);
    }

    printf("--->队友，向右看齐(按身高从大到小排序)!\n");    
    for(int loop = 0;loop<(sizeof(class01)/sizeof(Person *));loop++)
    {
        Person *p = class01[loop];

        //p->introduce(p);
    }
    
    printf("报数!\n"); 
    for(int loop = 0;loop<(sizeof(class01)/sizeof(Person *));loop++)
    {
        Person *p = class01[loop];
        p->introduce_name(p,loop);
    }


    return 0;
}

