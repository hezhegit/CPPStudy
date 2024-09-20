#include <iostream>
using namespace std;
//
// Created by hezhe on 2024/9/19.
//
int main(){
    // 1. 在堆区申请内存 new
    // 2. 在堆区释放内存 delete

    // ===C 风格===
    int *p1 = (int *) malloc(4);
    int *p2 = (int *) malloc(8);
    *p1 = 666; // 等价于 p1[0]=666
    for (int i = 0; i < 3; ++i) {
        *(p2+i) = (i +1); // p[i] = i+1
    }
    cout << p1 << endl; // p1的内存地址
    cout << *p1 << endl; // p1[0]
    cout << *(p2+1) << endl; //p2[1]

    free(p1);
    free(p2);

    // == C++ 风格 ==
    int *p11 = new int(666);
    int *p12 = new int[3]{1, 2, 3};
    cout << *p11 << endl;
    cout << *(p12 +2) << endl;
    cout << p12[2] << endl;

    delete p11; // 不要重复释放同一块内存
    p11 = nullptr;
    delete[] p12;
    p12 = nullptr;

    int a = 88;
    int *p3 = &a;
    cout << &a << endl; // 栈区内存 a的地址 不能 delete
    cout << *p3 << endl;
    cout << (p3 == &a) << endl; // 1

    int *p4;
    p4 = &a;
    cout << *p4 << endl;

    // 关于 堆和栈
    // 栈：栈内存由编译器自动管理，采用后进先出（FIFO）的方式进行分配和释放。
    // 当函数调用时，局部变量和函数参数会被压入栈中，函数返回时，这些变量会自动释放。
    // 堆：堆内存由程序员手动管理，使用动态内存分配（如 new 和 delete）。
    // 堆内存的分配和释放不受函数调用的限制，生命周期由程序员控制。


    return 0;
}