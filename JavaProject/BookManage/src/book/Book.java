package book;

/**
 * @Author: Fourteen-Y
 * @Description: 图书信息，包括书名、作者、价格、类型、是否被借出
 * @Date: 2023/7/27 12:04
 */
public class Book {
    private String name;
    private  String author;
    private int price;
    private String type;
    private  boolean isBorrowed;

    public Book(String name, String author, int price, String type) {
        this.name = name;
        this.author = author;
        this.price = price;
        this.type = type;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public boolean isBorrowed() {
        return isBorrowed;
    }

    public void setBorrowed(boolean borrowed) {
        isBorrowed = borrowed;
    }

    @Override
    public String toString() {
        return "Book{" +
                "name='" + name + '\'' +
                ", author='" + author + '\'' +
                ", price=" + price +
                ", type='" + type + '\'' +
                // 三目运算符 当isBorrowed为true时，输出已借出，否则输出未借出
                ((isBorrowed == true) ? " ,已借出" : " ,未借出")+
                // ", isBorrowed=" + isBorrowed +
                '}';
    }
}
