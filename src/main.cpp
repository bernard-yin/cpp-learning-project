//
// Created by BernardYin on 2025-12-19.
//
#include "head.h"
using namespace std;

int main() {
	cout << "C++ Project Started" << endl;//cout标准输出流对象，endl表示换行并刷新缓冲区
#if 0 //0表示不编译这部分代码，1表示编译,类似于注释功能
	datetype();//输出不同数据类型的大小及其取值范围
#endif
	int a;
	int& r = a;
	int* p = &a;
	cout << "a的地址：" << &a << endl;
	cout << "r的地址：" << &r << endl;
	cout << "p的地址：" << p << endl;
	return 0;
}