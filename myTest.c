#include <stdio.h>

#define HEIGHT 10  // 杨辉三角形的高度

int main()
{
    int triangle[HEIGHT][HEIGHT] = {0};  // 初始化二维数组

    // 构建杨辉三角形
    for (int i = 0; i < HEIGHT; i++)
    {
        triangle[i][0] = 1;  // 每行第一个元素为1
        triangle[i][i] = 1;  // 每行最后一个元素为1

        // 填充中间元素（等于上一行相邻两元素之和）
        for (int j = 1; j < i; j++)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // 打印标题
    printf("这是杨辉三角形, 高度:%d\n", HEIGHT);

    // 打印杨辉三角形（带格式对齐）
    for (int i = 0; i < HEIGHT; i++)
    {
        // 打印左侧空格（用于居中对齐）
        for (int k = 0; k < HEIGHT - i - 1; k++)
        {
            printf("  ");
        }
        // 打印当前行的元素
        for (int j = 0; j <= i; j++)
        {
            printf("%4d", triangle[i][j]);  // 每个数字占4个字符宽度
        }
        printf("\n");  // 换行
    }

    return 0;
}