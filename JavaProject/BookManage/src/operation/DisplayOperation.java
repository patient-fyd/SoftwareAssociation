package operation;

import book.Book;
import book.BookList;

/**
 * @Author: Fourteen-Y
 * @Description: 展示图书
 * @Date: 2023/7/27 12:08
 */
public class DisplayOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        System.out.println("展示图书!");


        int currentSize = bookList.getUsedSize();
        for (int i = 0; i < currentSize; i++) {

            Book book = bookList.getPos(i);
            System.out.println(book);
        }

    }
}
