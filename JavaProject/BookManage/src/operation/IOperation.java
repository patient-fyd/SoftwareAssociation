package operation;

import book.BookList;

/**
 * @Author: Fourteen-Y
 * @Description:
 * @Date: 2023/7/27 12:09
 */
public interface IOperation {
    // 由于接口中的方法都是抽象方法，所以可以省略public abstract
    void work(BookList bookList);
}
