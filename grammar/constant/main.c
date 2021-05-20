// 定义一个符号常量
// 定义形式：#define 标示符 常量数据

/**
 * 1. 一般符号常量名用大写
 * 2. 常量没有存储空间，不能被赋值和指定类型
 **/
#define PI 3.14159
#include <stdio.h>

void main( )
{
    float r, l;
    r = 3;
    l = 2 * PI * r;
    printf("length = %f", l);
}