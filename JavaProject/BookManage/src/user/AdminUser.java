package user;

import operation.*;

import java.util.Scanner;

/**
 * @Author: Fourteen-Y
 * @Description: 管理员 1.查找图书 2.新增图书 3.删除图书 4.显示图书 0.退出系统
 * @Date: 2023/7/27 12:09
 */
public class AdminUser extends User {
    public AdminUser(String name) {
        super(name);

        // 把所有的操作都放到这个数组中
        this.ioPerations = new IOperation[] {
                new ExitOperation(),
                new FindOperation(),
                new AddOperation(),
                new DelOperation(),
                new DisplayOperation(),
        };
    }

    /**
     * 管理员菜单 1.查找图书 2.新增图书 3.删除图书 4.显示图书 0.退出系统
     * @return 返回用户输入的选项，供主程序调用
     */
    @Override
    public int menu() {
        System.out.println("欢迎管理员"+this.name+"登录");
        System.out.println("1.查找图书");
        System.out.println("2.新增图书");
        System.out.println("3.删除图书");
        System.out.println("4.显示图书");
        System.out.println("0.退出系统");
        Scanner sc = new Scanner(System.in);
        int choice = sc.nextInt();
        return choice;

    }
}
