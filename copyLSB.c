int copyLSB(int num)
{
    int num;

    num <<= 31;
    num >>= 31;
    return (num);
}