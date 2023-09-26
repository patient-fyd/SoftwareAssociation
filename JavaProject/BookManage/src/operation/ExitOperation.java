package operation;

import book.BookList;

/**
 * @Author: Fourteen-Y
 * @Description: 退出系统
 * @Date: 2023/7/27 12:08
 */
public class ExitOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        System.out.println("退出系统!");

        int currentSize = bookList.getUsedSize();
        for (int i = 0; i < currentSize; i++) {
            BookList.setBooks(i,null);
        }
        System.exit(0);
    }
}
