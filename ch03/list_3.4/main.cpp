#include <iostream>
#include <string>

class person
{
    std::string m_name;
    int m_age;

public:
    person();

    void set_name(std::string name);
    void set_age(int age);

    std::string name() const;
    int age() const;
};

// 不正な値で年齢を初期化するコンストラクター
// m_nameは初期化リストにないが、この場合にはstd::stringのデフォルトで初期化される
person::person() : m_age(-1)
{
    std::cout << "コンストラクター呼び出し" << std::endl;
}

void person::set_name(std::string name)
{
    m_name = name;
}

void person::set_age(int age)
{
    m_age = age;
}

std::string person::name() const
{
    return m_name;
}

int person::age() const
{
    return m_age;
}

int main()
{
    person bob; // コンストラクターによる初期化が行われる

    std::cout << "初期化直後の年齢: " << bob.age() << std::endl;
    bob.set_name("bob");
    bob.set_age(20);
    std::cout << "名前`: " << bob.name() << std::endl;
    std::cout << "年齢: " << bob.age() << std::endl;
}
