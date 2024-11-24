#include <iostream>

using namespace std;
// 以下以swap函數的例子說明"參考"指標特性

void swap(int& a, int& b){  //注意!這裡參數不是 int* 而是參考
    // 因為"參考"具有指標的功能,所以以下直接操作參考,就等於操作指標了
    // 如此一來,程式碼看起來比較乾淨直覺了,但是也交換得到外部傳入的值
    int temp = a;        
    a = b;
    b = temp;
}

int main(int argc, char* argv[], char* env[]) 
{
    int x = 7, y =8;
    cout << "BEFORE: x ="  << x << " y = " << y << endl;
    swap(x, y);   // 呼叫參數是"參考"的swap,因為"參考"就是本尊的分身,可以直接傳入x, y --->不用修飾
    cout << "AFTER: x ="  << x << " y = " << y << endl;
    return 0;
}
