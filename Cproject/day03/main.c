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

//int main(){
//    // else 跟最近的if匹配
//    int y = 0,x, result;
//    if (y != 0)
//        if (x != 0)
//            result = x / y;
//    else
//        printf("Error: y is equal to 0\n");
//    return 0;
//}

//int main(){
//    // 三目运算符
//    // 表达式1 ? 表达式2 : 表达式3
//    //“如果表达式 1成立，那么表达式 2，否则表达式 3。”
//    // 条件表达式求值的步骤是：
//    // 首先计算出表达式 1的值，如果此值不为零，
//    // 那么计算表达式 2的值，并且计算出来的值就是整个条件表达式的值；
//    // 如果表达式 1的值为零，那么表达式 3的值是整个条件表达式的值。
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
////    if (a >= b){
////        printf("%d\n", a);
////    } else {
////        printf("%d\n", b);
////    }
//
//    a >=b ? printf("%d\n", a) : printf("%d\n", b);
//
//    printf("%d\n", a >= b ? a : b);
//
//    // 三目运算符的嵌套
//    // 1.判断一个数是否为偶数
//    // 2.如果是偶数，判断是否能被3整除
//    // 3.如果能被3整除，输出yes，否则输出no
//    int c = 0;
//    scanf("%d", &c);
//    c % 2 == 0 ? (c % 3 == 0 ? printf("yes\n") : printf("no\n")) : printf("no\n");
//    return 0;
//}

//int main(){
//    // 计算1-100的所有质数的和
//    // 质数：只能被1和自身整除的数
//    int i = 3;
//    int j = 2;
//    // flag 用来标记i是否为质数
//    int flag = 0;
//    int sum = 0;
//    while (i <= 100){
//        j = 2;
//        while (j < i){
//            if (i % j == 0){
//                flag = 0;
//                break;
//            } else {
//                flag = 1;
//            }
//            j++;
//        }
//        if (flag == 1){
//            sum += i;
//        }
//        i++;
//    }
//    printf("1-100的所有质数的和为%d\n", sum + 2);
//    return 0;
//}

//int main(){
//    // C99标准中，增加了_Bool类型,值只能是0或1,存储的非零变量,导致变量赋值为1
//    _Bool flag = -4;
//    printf("%d\n", flag); // 1
//    return 0;
//}

//int main (){
//    // switch语句
//    // 语法: switch(表达式){  case: 常量表达式: 语句; break; default: 语句; }
//    int a = 0;
//    scanf("%d", &a);
//    switch (a){
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("上班\n");
//            break;
//        case 6:
//        case 7:
//            printf("加班\n");
//            break;
//        default:
//            printf("输入有误\n");
//            break;
//    }
//    return 0;
//}

// 使用技巧,把0放到==的前面,当你不小心把==写成=时,编译器会报错
int main(){
    int i = 0;
    if (0 == i){

    }

    return 0;
}