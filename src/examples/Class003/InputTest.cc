/*
 * =====================================================================================
 *
 *       Filename:  InputTest.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年06月05日 21时57分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  shookYu (), yujun2018@163.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;

int main ( int argc, char *argv[] )
{
    int    i = 0;
    char   c = 0;
    string s;
     
    cout<<"pls input a char:"<<endl;
    cin >> c; 
    cout<<"get a char:"<<c<<endl;
    
    cout<<"pls input a number:"<<endl;
    cin >> i; 
    cout<<"get a number:"<<i<<endl;

    cout<<"pls input a string"<<endl;
    cin >> s;
    cout<<"get a string:"<<s<<endl;
   
    return 0;
}

