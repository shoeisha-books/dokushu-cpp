class S
{
public:
    // 宣言と同時に定義も与える場合
    template <typename T>
    void foo(T value)
    {
        // ……
    }
    // 宣言と定義を分ける場合
    template <typename T>
    void bar(T value);
};

// 普通のメンバー関数定義にtemplateが付いただけ
template <typename T>
void S::bar(T value)
{
    // ……
}

int main()
{
    S s;

    s.foo<int>(0);

    s.bar<float>(0.0f);
}
