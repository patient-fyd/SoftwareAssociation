package user;

import operation.*;

import java.util.Scanner;

/**
 * @Author: Fourteen-Y
 * @Description: 普通用户 有四个操作：查找图书 借阅图书 归还图书 退出系统
 * @Date: 2023/7/27 12:10
 */
public class NormalUser extends User{
    public NormalUser(String name) {
        super(name);
        this.ioPerations = new IOperation[] {
                new ExitOperation(),
                new FindOperation(),
                new BorrowOperation(),
                new ReturnOperation(),
        };
    }

    /**
     * 普通用户菜单 1.查找图书 2.借阅图书 3.归还图书 0.退出系统
     * @return 返回用户输入的选项，供主程序调用
     */
    @Override
    public int menu() {
        System.out.println("欢迎"+this.name+"登录");
        System.out.println("1.查找图书");
        System.out.println("2.借阅图书");
        System.out.println("3.归还图书");
        System.out.println("0.退出系统");
        Scanner sc = new Scanner(System.in);
        int choice = sc.nextInt();
        return choice;
    }
}
