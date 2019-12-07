#include <iostream>

class heavy_class
{
    int m_value;

    mutable int m_cache; // キャッシュデータ
    mutable bool m_cache_valid; // キャッシュが有効かどうかのフラグ

public:
    int generate() const;

    void set(int value);
    int get() const;
};

// 設定された値からデータを生成するメンバー関数
int heavy_class::generate() const
{
    std::cout << "とても重いデータ生成関数" << std::endl;
    return m_value;
}

void heavy_class::set(int value)
{
    // 本来はセットされたタイミングで最終的に使うデータを生成できるとよいが、
    // 処理が重い場合には必要になるまで生成しないということもある

    m_cache_valid = false; // キャッシュを無効化
    m_value = value;
}

// getterなのでconstメンバー関数としたい
int heavy_class::get() const
{
    // キャッシュが有効ならそれを返す
    if (m_cache_valid) { return m_cache; }

    // 本来はconstメンバー関数はメンバー変数を変更できないが、
    // mutableなメンバー変数は変更できる
    m_cache = generate(); // データを生成してキャッシュに保存
    m_cache_valid = true; // キャッシュを有効化

    return m_cache;
}

int main()
{
    heavy_class heavy_object;

    heavy_object.set(100);

    std::cout << heavy_object.get() << std::endl;

    // データ生成関数は呼ばれず、キャッシュが返される
    std::cout << heavy_object.get() << std::endl;

    heavy_object.set(200);

    std::cout << heavy_object.get() << std::endl;

    // データ生成関数は呼ばれず、キャッシュが返される
    std::cout << heavy_object.get() << std::endl;
}
