# 图书管理系统

这是一个基于JavaSE开发的简单图书管理系统，旨在帮助图书馆或书店轻松管理他们的图书收藏。

## 功能特点

- 管理员功能：
  - 添加图书信息：包括书名、作者、图书类型、价格等。
  - 删除图书信息：根据图书ID删除图书记录。
  - 查看图书信息：查看图书的属性，如书名、作者等。
  - 显示图书库存：查看库存中所有图书的列表。
  
- 用户功能：
  - 搜索图书：根据书名搜索图书。
  - 借阅图书：用户可以选择借阅图书，并将其添加到借阅列表。
  - 归还图书：让借阅的图书归还到库存。

## 使用方法

1. 克隆或下载项目代码到本地计算机。

2. 打开项目，并使用Java开发环境（如Eclipse、IntelliJ IDEA等）导入项目。

3. 在开发环境中运行`Main.java`文件，启动图书管理系统。

4. 在登录界面，选择以用户或者管理员身份登录。

5. 使用系统的不同功能来管理图书或借阅图书。

## 项目结构

```
BookManage/
├── src/
│   ├── book/
│   │   ├── Book.java
|   |   ├── BookList.java
│   ├── operation/
│   │   ├── AddOperation.java
│   │   ├── BorrowOperation.java
│   │   ├── DelOperation.java
│   │   ├── DisplayOperation.java
|   |   ├── ExitOperation.java
│   │   ├── FindOperation.java
|   |   ├── IOperation.java
|   |   ├── ReeturnOperation.java
│   ├── user/
│   │   ├── AdminUser.java
│   │   ├── NormalUser.java
│   │   ├── User.java
│   ├── Main.java
├── README.md
```

- `Main.java`：包含图书管理系统的主类，用于启动程序。
- `book`：定义了图书的属性和方法。
- `operation`：定义了操作逻辑
- `User`：定义了用户的属性和方法。

## 注意事项

- 本项目是一个JavaSE示例项目，仅包含基本的功能和界面。你可以根据需要扩展和优化它。

## 许可证

