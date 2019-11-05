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

// �s���Ȓl�ŔN�������������R���X�g���N�^�[
// m_name�͏��������X�g�ɂȂ����A���̏ꍇ�ɂ�std::string�̃f�t�H���g�ŏ����������
person::person() : m_age(-1)
{
    std::cout << "�R���X�g���N�^�[�Ăяo��" << std::endl;
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
    person bob; // �R���X�g���N�^�[�ɂ�鏉�������s����

    std::cout << "����������̔N��: " << bob.age() << std::endl;
    bob.set_name("bob");
    bob.set_age(20);
    std::cout << "���O`: " << bob.name() << std::endl;
    std::cout << "�N��: " << bob.age() << std::endl;
}