package operation;

import book.BookList;

import java.util.Scanner;

/**
 * @Author: Fourteen-Y
 * @Description: 查找图书
 * @Date: 2023/7/27 12:09
 */
public class FindOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        System.out.println("查找图书!");
        System.out.println("请输入你要查找图书的名字：");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();

        int currentSize = bookList.getUsedSize();
        for (int i = 0; i < currentSize; i++) {
            if (bookList.getPos(i).getName().equals(name)) {
                System.out.println("找到这本书了，信息如下");
                System.out.println(bookList.getPos(i));
                return;
            }
        }
        System.out.println("没有这本书！");
    }

}
