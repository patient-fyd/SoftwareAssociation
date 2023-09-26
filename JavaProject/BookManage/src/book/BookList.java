package book;

/**
 * @Author: Fourteen-Y
 * @Description: 对图书的存储
 * @Date: 2023/7/27 12:04
 */
public class BookList {
    /**
     * 创建一个数组，用来存放书籍,一开始默认5本书
      */
    private static Book[] books = new Book[5];
    /**
     * 数组中放了书的个数
     */
    private int usedSize;

    /**
     * 默认存放的书籍
     */
    public BookList() {
        books[0] = new Book("三国演义","罗贯中",34,"小说");
        books[1] = new Book("西游记","吴承恩",24,"小说");
        books[2] = new Book("红楼梦","曹雪芹",30,"小说");
        books[3] = new Book("水浒传","施耐庵",34,"小说");
        books[4] = new Book("西厢记","王实甫",34,"小说");
        this.usedSize = 5;
    }

    public static void ensureCapacity(BookList bookList) {
        // 如果当前数组已经满了，就扩容成原来的2倍
        if (bookList.getUsedSize() == books.length) {
            Book[] newBooks = new Book[2 * books.length];
            for (int i = 0; i < books.length; i++) {
                newBooks[i] = books[i];
            }
            books = newBooks;
        }
    }

    public int getUsedSize() {
        return usedSize;
    }

    public void setUsedSize(int usedSize) {
        this.usedSize = usedSize;
    }

    //借书还书的操作，涉及到数组的操作
    /**
     * 获取pos下标的书
     * @param pos
     * @return
     */
    public Book getPos(int pos) {
        return books[pos];
    }

    /**
     * 给数组的pos位置，放一本书
     * @param pos
     * @param book
     */
    public static void setBooks(int pos, Book book) {
        books[pos] = book;
    }
}
