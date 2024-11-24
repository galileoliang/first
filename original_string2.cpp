#include <iostream>

using namespace std;

int main()
{
    // 將"字串"看成"字元指標"
    // 須知:  陣列 其實是  "指標"
    
    // 範例說明:
    int arr[5] = {1,2,3,4,5};
    // 印出 arr[0]
    cout << arr[0] << endl; //印出第一個元素
    cout << *arr <<endl;     // 這也可以印出第一個元素

    cout << "==================\n";
    cout << &arr[0] << endl;
    cout << &arr << endl;
    cout << arr << endl;   // 因為: 陣列(的名字)就是儲存該陣列指標(記憶體位置)的變數
                                        // &arr[0], &arr, arr 編譯器知道是同一個東西
    
    // 指標是可以"往前"或"往後"移動的===>但要注意必須合法--->不屬於該指標可以前後移動
    // 的範圍,隨意移動過去會有不可預知的後果
    // 因為陣列其實是一串同質元素前後連在一起,所以如果你得到陣列的頭部指標,你便可以用
    // 陣列指標在陣列元素範圍的位置移動
    // 例:
    // arr第二個元素
    cout << arr[1]  << endl; // 正常以陣列索引的取法
    cout << *(arr+1) << endl; // 以指標往後移動一個位置 ===> +1 後取值
    cout << "+++++++++++++++++++++++++\n";
    // 搭配迴圈1
    for(int i=0;i<5;i++){
         cout << *(arr+i) << endl; 
    }
    cout << "+++++++++++++++++++++++++\n";
    // 搭配迴圈2

    int* p = arr;  // Pointer to the first element of the array
    while (p < arr + 5) {  // While pointer is within the array bounds
        cout << *p << endl;  // Dereferencing the pointer to get the value
        p++;  // Move the pointer to the next element
    }
    return 0;

}
