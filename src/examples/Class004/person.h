/*
 * =====================================================================================
 *
 *       Filename:  person.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年06月05日 23时33分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  shookYu (), yujun2018@163.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef __PERSON_H__
#define __PERSON_H__


typedef struct person
{
    char name[20];
    char sex[8];
    int age;
    int height;
    void(*introduce)(struct person *p);
    void(*introduce_name)(struct person *p,int pos);
}Person;

#endif
