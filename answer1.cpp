/*

預測輸出


int x = 10;
int* ptr = &x;
cout << "x 的值: " << x << endl;
cout << "x 的地址: " << &x << endl;
cout << "ptr 儲存的值: " << ptr << endl;
cout << "ptr 指向的值: " << *ptr << endl;

答案: 

x 的值: 10
x 的地址: 0x十六進位數字
ptr 儲存的值: 0x十六進位數字
ptr 指向的值: 10
*/

#include <iostream>
using namespace std;
 int x;
int main( )
{
    int a = 5, b = 15;
    int* p;
    p = &a;
   *p = 20;
    p = &b;
   *p = 30;
    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}
