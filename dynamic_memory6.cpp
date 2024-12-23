#include <iostream>

using namespace std;

int main(int argc, char* argv[], char* env[]) 
{
    // 在C++中,另外對 "&" 賦予了新運算意義 ===> 參考 ----> reference
    // 理由: C++的創始人 Bjarne Stroustrup 認為:用 * 和 & 操作指標太繁瑣
    //         於是他對 & 增加的一個運算能力,這個能力就是"( 記憶體)操考"
    // 用法:
    /*
      1. 使用  & 宣告"參考變數"  ===> 注意!!參考變數必須在宣告當下就指名參考哪個值
      2. 宣告(參考)成功的話, 該參考變數便可以取代原本的值用在程式碼中
      那這麼麻煩!參考變數總要有一些功能吧!
      參考變數具有"指標"的效果
    */
   // 以下範例說明
   int data = 123;   // 得有一個值
   int& r = data;    // 宣告"參考" ===>  型態& 參考變數名字 ---> 注意!必須馬上以 "=" 指定參考對象

   cout << data << endl;
   cout << r << endl;     // 參考基本就是原值的一個分身

    
    return 0;
}
