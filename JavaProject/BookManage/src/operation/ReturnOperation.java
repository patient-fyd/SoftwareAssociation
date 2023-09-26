package operation;

import book.BookList;

import java.util.Scanner;

/**
 * @Author: Fourteen-Y
 * @Description: 归还图书
 * @Date: 2023/7/27 12:09
 */
public class ReturnOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        System.out.println("归还图书!");
        System.out.println("请输入你要归还图书的名字：");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();

        int currentSize = bookList.getUsedSize();
        for (int i = 0; i < currentSize; i++) {
            if (bookList.getPos(i).getName().equals(name)) {
                if (bookList.getPos(i).isBorrowed()) {
                    bookList.getPos(i).setBorrowed(false);
                    System.out.println("归还成功！");
                    return;
                }
                System.out.println("这本书没有被借出去！");
                return;
            }
        }
        System.out.println("这本书不是该图书馆的书！");

    }
}
