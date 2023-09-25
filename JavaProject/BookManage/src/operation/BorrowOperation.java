package operation;

import book.Book;
import book.BookList;

import java.util.Scanner;

/**
 * @Author: Fourteen-Y
 * @Description:
 * @Date: 2023/7/27 12:08
 */
public class BorrowOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        System.out.println("借阅图书!");
        System.out.println("请输入你要借阅图书的名字：");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();

        // 1.查找书籍是否存在
        int currentSize = bookList.getUsedSize();
        for (int i = 0; i < currentSize; i++) {
            Book book = bookList.getPos(i);
            if (book.getName().equals(name)) {
                // 2.判断书籍是否被借出
                if (book.isBorrowed()) {
                    System.out.println("这本书已经被借出去了！");
                    return;
                }
                // 3.借阅书籍
                book.setBorrowed(true);
                System.out.println("借阅成功！");
                return;
            }
        }
        System.out.println("没有你要借阅的图书");


    }
}
