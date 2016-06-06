/*
 * =====================================================================================
 *
 *       Filename:  OutputTest.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年06月05日 20时46分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;

int main(int argc ,char *argv[])
{
    char  c = 'a';
    int   i = 10;
    const char *s = "hello world";
    int  *p = &i;
    
    cout<<"c="<<c<<endl;
    cout<<dec<<"i="<<i<<endl;
    cout<<hex<<"i="<<i<<endl;
    cout<<oct<<"i="<<i<<endl;
    cout<<"s="<<s<<endl;
    cout<<"p="<<p<<endl;
    cout<<"&i="<<(void *)&i<<endl;
    
    return 0;

}

