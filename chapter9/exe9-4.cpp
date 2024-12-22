// Exercise 9.4
// 编写函数:
// 接受一对指向vector的迭代器和一个int值。在两个迭代器指定的范围中查找给定的值，返回一个布尔值来指出是否找到。

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool find_in_vec(vector<int>::iterator begin,
                vector<int>::iterator end,
                int val){

    while(begin != end){
        if(*begin == val){
            return true;
        }
        ++begin;
    }         
    return false;  
}
 d
int main(){

    vector<int> ilist = {1, 2, 3, 4, 5, 6, 7};

    cout << find_in_vec(ilist.begin(), ilist.end(), 3) << endl;
    cout << find_in_vec(ilist.begin(), ilist.end(), 10) << endl;

    return 0;
}