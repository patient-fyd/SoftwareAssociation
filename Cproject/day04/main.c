//#include <stdio.h>

//void playGame();

//int main() {
////    int i = 10;
////    // while 语句
////    while(i>=0){
////        // 循环体
////        printf("%d\n", i);
////        i--;
////    }
//
//    while (1){
//        // 菜单
//        printf("请选择：\n");
//        printf("1.开始游戏 1\n");
//        printf("2.退出 2\n");
//
//        // 用户输入
//        int choice = 0; // 用来存储用户的选择
//        scanf("%d", &choice);
//        switch (choice) {
//            case 1:
//                playGame();
//                break;
//            case 2:
//                printf("退出\n");
//                break;
//            default:
//                printf("输入错误\n");
//                break;
//        }
//
//    }
//    return 0;
//}
//
//void playGame() {
//
//}

//int main(){
//    // do while 语句
//    // 相对while来说，循环体至少执行一次
//    do {
//        // 循环体
//        printf("hello world\n");
//    } while (1);
//    return 0;
//}

//int main(){
//    // for 语句
//    //[for 语句格式] 　　for (表达式1; 表达式2; 表达式3) 语句
//    // 执行顺序。表达式1，表达式2判断，循环体，表达式3，表达式2的判断，循环体，表达式3
//    int i = 10;
//    for (; i >= 0; ) {
//        // 循环体
//        printf("%d\n", i);
//        i--;
//    }
//
//    for (int j = 1; j <= 5; ++j) {
//        printf("hello  ");
//    }
//    return 0;
//}

//int main(){
//    // break 语句
//    // 用来跳出循环
//    // continue 语句
//    // 用来跳过本次循环
//    // goto 语句
//    // 用来跳转到指定的位置
//    int i = 0;
//    while(i < 5){
//        printf("hello world\n");
//        goto end;
//        i++;
//    }
//    end:
//    printf("循环结束");
//    return 0;
//}

//int main(){
//    // 九九乘法表
//    for (int i = 1; i <= 9; ++i) {
//        for (int j = 1; j <= i; ++j) {
//            printf("%d*%d=%d\t", j, i, i*j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame();

int main() {
    int falg = 1;
    do {
        // 游戏菜单
        printf("****************************\n");
        printf("******欢迎你来到猜数字游戏*****\n");
        printf("******1：游戏开始 ************\n");
        printf("******2：退出游戏 ************\n");
        printf("****************************\n");

        // 读取用户输入
        int choice;
        printf("请输入你的选择：");
        scanf_s("%d", &choice);

        switch (choice) {
            case 1:
                playGame();
                continue;
            case 2:
                return 0;
        }
    } while (falg);
    return 0;
}

void playGame() {
    // 生成随机数
    srand((unsigned int)time(NULL));
    int random = rand() % 100 + 1;
    printf("请输入你要猜的数字（1-100）");
    int guess = 0;
    scanf_s("%d", &guess);
    if (guess < 1 || guess > 100) {
        printf("输入错误\n");
        return;
    }
    while (1) {
        if (guess > random) {
            printf("猜大了\n");
        }
        else if (guess < random) {
            printf("猜小了\n");
        }
        else {
            printf("猜对了\n");
            break;
        }
        printf("请重新输入你要猜的数字（1-100）");
        scanf_s("%d", &guess);
    }

}
