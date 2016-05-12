int main()
{
    constexpr int array_size = 10;
    int ia[array_size];
    for (int ix = 1; ix <= array_size; ix++) {
        ia[ix] = ix;
    }

    return 0;
}
