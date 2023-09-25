import book.BookList;
import user.AdminUser;
import user.NormalUser;
import user.User;

import java.util.Scanner;

/**
 * @Author: Fourteen-Y
 * @Description:
 * @Date: 2023/7/27 12:11
 */
public class Main {
    public static User login(){
        System.out.println("请输入你的姓名：");
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        System.out.println("请输入你的身份：1.管理员 2.普通用户");
        int choice = sc.nextInt();
        if(choice == 1) {
            return new AdminUser(name);
        }else {
            return new NormalUser(name);
        }
    }
    public static void main(String[] args) {
        BookList bookList = new BookList();
        User user = login();
        while(true) {
            int choice = user.menu();
            user.doOperation(choice,bookList);
        }
    }
}
