#include <iostream>
#include <cstring>
using namespace std;
//
// Created by hezhe on 2024/9/19.
//
int main() {
    //1. 转义字符：原字符串表示
    const char *str = "tom's name is \"tom green \"";
    cout << str << endl;
    // 等价于
    const char *str_ = R"(tom's name is "tom green ")";
    cout << str_ << endl;

    //2. string 类型
    string str1 = "hello";
    string str2 = "world";
    // 比较
    if (str1 < str2){
        cout << "small str:" << str1 << endl;
    }else {
        cout << "small str:" << str2 << endl;
    }

    string str3;
    str3 = str1;
    cout << str3 << endl;
    // 拼接
    str1 = str1 + str2;
    cout << str1 << endl; // helloworld
    // 获取某个字符
    cout << str1[4] << endl; // o

    // 3. 原理：
    // 字符串实际上是使用 null 字符 \0 终止的一维字符数组。
    // 因此，一个以 null 结尾的字符串，包含了组成字符串的字符。
    // 所以字符数组的大小比单词 RUNOOB 的字符数多一个。
    char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    cout << site << endl; // RUNOOB
    cout << strlen(site) << endl; // 6
    char site2[7] = {'R', 'U', '\0', 'O', 'O', 'B', '\0'};
    cout << site2 << endl; // RU
    cout << strlen(site2) << endl; //2

    string str4 = "runoob";
    string str5 = "goo\0gle";
    cout << "str4 :  " << str4 << endl; // runoob
    cout << "str4.size() :  " << str4.size() << endl; // 6
    cout << "str5 :  " << str5 << endl; // goo
    cout << "str5.size() :  " << str5.size() << endl; // 3

    return 0;
}