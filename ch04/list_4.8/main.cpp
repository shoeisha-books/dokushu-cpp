int* dangling_pointer()
{
    int i = 0;
    return &i; // ダングリングポインター。ローカル変数iの寿命は関数の終了とともに尽きる
}

int main()
{
    int* p = dangling_pointer();
    *p = 42; // 危険。寿命が尽きたローカル変数を変更しようとしている
}
