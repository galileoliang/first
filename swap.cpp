
#include <iostream>
using namespace std;
                                             // by value calling   傳值(值副本)呼叫
void swap(int* pa, int* pb){  // by reference calling 傳址(指標)呼叫

    cout << "in function ---> BEFORE a: " << *pa << ", b: " << *pb << endl;
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
    cout << "in function ---> AFTER a: " << *pa << ", b: " << *pb << endl;

}
int main( )
{
    int a = 5, b = 15;

    cout << "outside function --->BEFORE a: " << a << ", b: " << b << endl;

    swap(&a, &b);
   
    cout << "outside function --->AFTER a: " << a << ", b: " << b << endl;
    return 0;
}
