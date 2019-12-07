#include <iostream>
#include <string>

class Object
{
    std::string name;

public:
    Object(std::string name);

    const std::string& get_name() const;
};

Object::Object(std::string name) : name{ name }
{
    // 文字列をメンバー変数のnameにコピー
}

const std::string& Object::get_name() const
{
    return name; // nameを参照で返す
}

int main()
{
    Object obj{ "とても大きなオブジェクト" };
    // メンバー変数への参照を取得。コピーが起きないので高速
    const std::string& name = obj.get_name();
    std::cout << name << std::endl;
}
