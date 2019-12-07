#include <iostream>
#include <string>

class person
{
    std::string m_name;
    int m_age;

    person(int age);

public:
    person();
    person(std::string name, int age);

    person(const person& other); // コピーコンストラクター

    void set_name(std::string name);
    void set_age(int age);

    std::string name() const;
    int age() const;
};

person::person(int age) : m_age(age)
{
    std::cout << "共通コンストラクター呼び出し" << std::endl;
}

person::person() : person(-1)
{
    std::cout << "引数なしコンストラクター呼び出し" << std::endl;
}

person::person(std::string name, int age) : person(age)
{
    std::cout << "引数付きコンストラクター呼び出し" << std::endl;
    set_name(name);
}

// コピーコンストラクター
person::person(const person& other)
{
    std::cout << "コピーコンストラクター呼び出し" << std::endl;
    // 名前をコピーする
    set_name(other.name());
    set_age(other.age());
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
    person alice("alice", 15);

    person copy(alice); // コピーコンストラクター呼び出し
    std::cout << copy.name() << std::endl;
    std::cout << alice.name() << std::endl;
}
