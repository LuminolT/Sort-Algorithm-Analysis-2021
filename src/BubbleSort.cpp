//
// Created by admin on 2021/6/23.
//

#include "BubbleSort.h"

void BubbleSort::ori() {
    var temp; // 定义一个局部变量，数据类型与形式数据类型相同
    int i, j;
    for (i = 1; i < size; i++) // 共进行 size-1 轮比较和交换
    {
        for (j = 0; j < size - i; j++) {
            if (data[j] > data[j + 1]) // 相邻元素之间比较，必要时
            {
                temp = data[j]; // 交换 a[j] 与 a[j+1]
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void BubbleSort::improved() {
    int i = 0, j = 0;
    int k = size - 1,pos = 0;//pos变量用来标记循环里最后一次交换的位置
    for (i = 0; i < size - 1; i++)//一共要排序size-1次
    {
        //每次遍历标志位都要先置为0，才能判断后面的元素是否发生了交换
        int flag = 0;

        for (j = 0; j <k; j++)//选出该趟排序的最大值往后移动
        {
            if (data[j] > data[j + 1])
            {
                var tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
                flag = 1;//只要有发生了交换，flag就置为1
                pos = j;//循环里最后一次交换的位置 j赋给pos
            }
        }
        k = pos;
        //判断标志位是否为0，如果为0，说明后面的元素已经有序，就直接return
        if (flag == 0)
        {
            return;
        }
    }

}

