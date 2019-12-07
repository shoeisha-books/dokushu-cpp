#include <iostream>

class Book
{
    std::string title = "";
    int page = 0;

public:
    Book();
    explicit Book(std::string title, int page);

    void show() const;
};

// pageはメンバー初期化リストで省略したのでNSDMIのデフォルト値を使って初期化される
Book::Book()
    : title("untitled")
{
}

// メンバー初期化リストで与えた初期値が使われる
Book::Book(std::string title, int page)
    : title(title), page(page)
{
}

void Book::show() const
{
    std::cout << title << " " << page << "ページ" << std::endl;
}

int main()
{
    Book nsdmi; // NSDMI

    nsdmi.show();

    Book old_edition{ "独習C++ 第4版", 568 };

    old_edition.show();
}
