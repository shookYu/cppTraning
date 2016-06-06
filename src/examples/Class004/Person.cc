/*
 * =====================================================================================
 *
 *       Filename:  Person.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年06月06日 00时56分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  shookYu (), yujun2018@163.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>
#include <map>
#include "Person.h"

using namespace std;

int main(int argc,char *argv[])
{
    vector<Person> class001Vec;
    Person zhangsan("zhangsan","male",30,175);
    Person lisi("lisi","male",35,168);
    Person wangmazi("wangmazi","female",18,173);
    class001Vec.push_back(zhangsan);
    class001Vec.push_back(lisi);
    class001Vec.push_back(wangmazi);
    
    cout<<"--->大家注意，下面开始自我介绍!"<<endl;    
    vector<Person>::iterator iter1;
    for(iter1 = class001Vec.begin();iter1 != class001Vec.end();iter1++)
    {
        iter1->introduce(); 
    }
    
    cout<<"--->队友，向右看齐(按身高从大到小排序)!"<<endl;  
    map<int,Person> class001Map;
    class001Map.insert(pair<int,Person>(zhangsan.getHeight(),zhangsan)); 
    class001Map.insert(pair<int,Person>(lisi.getHeight(),lisi)); 
    class001Map.insert(pair<int,Person>(wangmazi.getHeight(),wangmazi)); 
    
    map<int,Person>::iterator iter2;
    int loop = 0;
    for(iter2 = class001Map.begin();iter2 != class001Map.end();iter2++)
    {
        (iter2->second).introduce(loop++); 
    }

    return 0;
}
