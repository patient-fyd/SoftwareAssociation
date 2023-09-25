package operation;

import book.Book;
import book.BookList;

import java.util.Scanner;

/**
 * @Author: Fourteen-Y
 * @Description: 新增图书
 * @Date: 2023/7/27 12:07
 */
public class AddOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        System.out.println("新增图书!");
        System.out.println("请输入图书的名字：");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        System.out.println("请输入图书的作者");
        String author = sc.nextLine();
        System.out.println("请输入图书的类型");
        String type = sc.nextLine();
        System.out.println("请输入图书的价格");
        int price = sc.nextInt();


        // 创建一个Book对象
        Book book = new Book(name,author,price,type);

        // 当BookList满了的时候，自动扩容成原来的2倍
        BookList.ensureCapacity(bookList);
        int currentSize = bookList.getUsedSize();
        BookList.setBooks(currentSize,book);

        // 更新usedSize
        bookList.setUsedSize(currentSize + 1);

        System.out.println("新增成功！");
    }
}
