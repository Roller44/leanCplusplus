int main()
{
    //int null = 0, *p = null;
    //错误，正确如下
    int null = 0, *p = &null;;
    return 0;
}
