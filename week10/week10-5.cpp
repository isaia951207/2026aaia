/// week10-5.cpp 氣泡排序示範
/// 修改自 week10-3.cpp 加入排序功能（大到小）
/// (1) 陣列宣告 (2) for 迴圈印出 (3) if 判斷比較並交換 (4) for 迴圈再印出

#include <stdio.h>

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};  /// 陣列宣告

    for (int i=0; i<10; i++) {  /// 第一個 for 迴圈印出陣列
        printf("%d ", a[i]);    /// 空格間隔
    }
    printf("\n");  /// 換行

    for (int k=0; k<20; k++) {   /// 外層控制排序次數
        for (int i=0; i<10-1; i++) {  /// 內層比較相鄰元素
            if (a[i] < a[i+1]) {     /// 如果前面小於後面（做大到小排序）
                int temp = a[i];     /// 暫存
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }

        for (int i=0; i<10; i++) {   /// 每一輪排序後印出
            printf("%d ", a[i]);
        }
        printf("\n");  /// 跳行
    }
    /// week10-5.cpp 執行結束
}
