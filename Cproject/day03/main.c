#include <stdio.h>

//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    // 括号内，必须是一个表达式，，0表示假，非0表示真
//    if (11 < 12) {
//        printf("回家种地\n");
//    } else {
//        printf("找到工作\n");
//    }

    // <运算符是左结合的  前面的运算符为真，值为1，假，值为0
    // i < j < k  =>  (i < j) < k
//    int i = 3;
//    int j = 2;
//    int k = 1;
//
//    if(i < j < k) {
//        printf("1111\n");
//    }
//    return 0;
//}

//int main(){
//    int a = 23;
//    int b = 1;
//    //
//    if(a != b){
//        printf("a和b不相等\n");
//    } else {
//        printf("a和b相等\n");
//    }
//    return 0;
//}


//int main () {
//    // 逻辑运算符
//    // 逻辑非 ！
//    // 如果表达式 的值为0，那么!表达式的结果为1；
//    // 逻辑与 &&  两边的表达式都为真，结果才为真
//    // 并且，
//    if (0 && 1) {
//        printf("1111\n");
//    } else {
//        printf("2222\n");
//    }
//    // 逻辑或 ||  两边的表达式只要有一个为真，结果就为真
//    // 或者
//    if (1 || 0) {
//        printf("3333\n");
//    } else {
//        printf("4444\n");
//    }
//
//    // 运算符&& 和运算符|| 的短路特性
//    // 逻辑与 &&  如果第一个表达式为假，那么第二个表达式不会执行
//    // 逻辑或 ||  如果第一个表达式为真，那么第二个表达式不会执行
//    return 0;
//}

//int main(){
//    // 蓝桥杯真题
//    //计算1800年到2023年，中间有几个闰年
//    int year = 1800;
//    // 计数器，对闰年进行计数
//    int count = 0;
//    while(year <= 2023){
//        // 判断year是否为闰年
//        // 1.能被4整除，但是不能被100整除
//        //        // 并且，，，
//        // 2.能被400整除
//        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
//            count++;
//        }
//        year++;
//    }
//    printf("1800年到2023年，中间有%d个闰年\n", count);
//    return 0;
//}

//int main(){
//    // if的嵌套
//    // 1.判断一个数是否为偶数
//    // 2.如果是偶数，判断是否能被3整除
//    // 3.如果能被3整除，输出yes，否则输出no
//    int a = 0;
//    scanf("%d", &a);
//    if(a % 2 == 0){
//        // 是偶数
//        if(a % 3 == 0){
//            printf("yes\n");
//        } else {
//            printf("no\n");
//        }
//    } else {
//        printf("no\n");
//    }
//    return 0;
//}

//int main (){
//    //输出成绩等级
//    // 90-100  A
//    // 80-89   B
//    // 70-79   C
//    // 60-69   D
//    // 0-59    E
//    int score = 0;
//    scanf("%d", &score);
//    // 不能直接这样写 90 <= score <= 100
//    if(score >= 90 && score <= 100){
//        printf("A\n");
//    } else if(score >= 80 && score <= 89){
//        printf("B\n");
//    } else if(score >= 70 && score <= 79){
//        printf("C\n");
//    } else if(score >= 60 && score <= 69){
//        printf("D\n");
//    } else if(score >= 0 && score <= 59){
//        printf("E\n");
//    } else {
//        printf("输入的成绩有误\n");
//    }
//    return 0;
//}

int main(){
    // else 跟最近的if匹配
    int y = 0,x, result;
    if (y != 0)
        if (x != 0)
            result = x / y;
    else
        printf("Error: y is equal to 0\n");
    return 0;
}