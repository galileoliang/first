// 解釋 pointer ---> 指標(大陸稱指針)的基本意義
// pointer ====> data or codes store in certain space in memory. to access them by direct go to theri location
// the location in computer is an memory address, thre address is the pointer of that data or codes.

#include <iostream>
using namespace std;
 int x;
int main( )
{
    /*
    signed int x1;    // -2147483648 ~ 2147483647  ===> 4 byte
    // 大多C++/C 編譯器允許省略signed
    unsigned int x2;  //0~4294967925          ===> 4 byte 不含負數
    signed short  int x3; // -32768~32767                 ===> 2 byte
    // 大多編譯器 short int 也可以只寫 short 
    unsigned short int x4; // 0~65535          ===> 2 byte 不含負數
    // 如果你因需求,需要更大或更小byte的空間,C++/C原始型態不提供!必須自己做(資料結構)
    */

   
    x = 123;
    cout << x << endl;
  
    cout << &x << endl;   //  "&" is get address operator
    // direct access 123 by its address(pointer)
    cout << *(&x) << endl;  // "*" is get the value stored in address operator 
    // 向上面這樣寫不是不行!而是太複雜了
    // 在此引入 "指標(位置)變數"
    int*  pw;   // "*" 黏在"型態"後面,會被編譯器解釋成: "宣告一個該型態的變數"
    
    // 所以! int* pw的意思是: pw是一個"指向某個記憶體位置的變數",這種變數不同於一邊型態的變數
    // 專門用來表示"指標"(記憶體位置)

    pw = &x;    // 如此一來, 便可以將 &x 指定給pw這種變數了

    cout << pw << endl;  // 也會印出記憶體位置
    cout << *pw << endl; // 印出123, 但比 *(&x) 好些 
    cout << "+++++++++++++++++++++++++++++"  << endl;

    
    return 0;
}
