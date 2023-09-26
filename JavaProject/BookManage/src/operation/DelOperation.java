package operation;


import book.Book;
import book.BookList;

import java.util.Scanner;

/**
 * @Author: Fourteen-Y
 * @Description: 删除图书
 * @Date: 2023/7/27 12:08
 */
public class DelOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        System.out.println("删除图书!");
        System.out.println("请输入你要删除图书的名字：");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();

        // 1.查找书籍是否存在
        int currentSize = bookList.getUsedSize();
        for (int i = 0; i < currentSize; i++) {
            Book book = bookList.getPos(i);
            if (book.getName().equals(name)) {
                // 2.删除书籍
                for (int j = i; j < currentSize - 1; j++) {
                    Book book1 = bookList.getPos(j + 1);
                    BookList.setBooks(j,book1);
                }
                bookList.setUsedSize(currentSize - 1);
                System.out.println("删除成功！");
                return;
            }
        }
        System.out.println("没有你要删除的书！");

    }
}
