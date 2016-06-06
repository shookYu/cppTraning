/*
 * =====================================================================================
 *
 *       Filename:  Person.h
 *
 *    Description:  i
 *
 *        Version:  1.0
 *        Created:  2016年06月06日 00时41分20秒
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

#include <iostream>
#include <iomanip> //std::setw()
#include <string>

using namespace std;
class Person
{
    public:
            Person(string name,string sex,int age,int height):name(name),sex(sex),age(age),height(height)
            {
            
            }
            void introduce()
            {
                 
                cout<<"大家好，我的名字叫"<<setw(10)<<this->name<<",";
                cout<<"我是"<<setw(8)<<this->sex<<"孩,";
                cout<<"我今年"<<this->age<<"岁,";
                cout<<"我的身高是"<<this->height<<"cm，";
                cout<<"请多关照！"<<endl;
            }
            void introduce(int pos)
            {
                cout<<pos<<"!";
                cout<<"姓名:"<<setw(10)<<this->name<<"!";
                cout<<"身高:" <<this->height<<"!"<<endl;
            }
            int getHeight()
            {
                return this->height; 
            }
    private:
            string name;
            string sex;
            int    age;
            int    height;
};

#endif

