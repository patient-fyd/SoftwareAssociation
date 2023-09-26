package user;

import book.BookList;
import operation.IOperation;

/**
 * @Author: Fourteen-Y
 * @Description: 用户抽象类 有两个子类：普通用户和管理员
 * @Date: 2023/7/27 12:10
 */
public abstract class User {

    protected String name;
    /**
     * 把所有的操作都放到这个数组中 通过下标来选择具体的操作
     */
    public IOperation[] ioPerations;

    public User(String name) {
        this.name = name;
    }

    public abstract int menu();

    /**
     * 根据用户输入的选项，调用对应的操作
     * @param choice 用户输入的选项
     * @param bookList 图书列表
     */
    public void doOperation(int choice, BookList bookList) {
        ioPerations[choice].work(bookList);
    }
}
