#include <stdio.h>

// 定义学生结构体
struct Student
{
    char name[20];  // 姓名
    int age;        // 年龄
    float score;    // 成绩
};

int main(void)
{
    // 创建一个学生变量，并依次填写姓名、年龄、成绩
    struct Student s1 = {"张三", 20, 95.5f};

    // 用“变量名.成员名”访问其中的数据
    printf("姓名：%s\n", s1.name);
    printf("年龄：%d\n", s1.age);
    printf("成绩：%.1f\n", s1.score);

    // 修改年龄
    s1.age = 21;
    printf("修改后的年龄：%d\n", s1.age);

    return 0;
}