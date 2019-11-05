#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v)
{
    for (int i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

class person
{
    std::string name;
    int age;

public:
    explicit person(const char* n, int a)
        : name{ n }, age{ a }
    {}

    void show() const
    {
        std::cout << "name: " << name << ", age: " << age
            << std::endl;
    }
};

int main()
{
    std::vector<person> pv;
    // "alice", 12でpersonを（コンテナ内に）生成する
    pv.emplace(pv.end(), "alice", 12);

    for (const auto& p : pv)
    {
        p.show();
    }
}
