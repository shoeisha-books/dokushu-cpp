template <typename Iterator, typename T>
T sum_all(Iterator first, Iterator last, T val)
{
    while (first != last)
    {
        val += *first;
        ++first;
    }

    return val;
}
