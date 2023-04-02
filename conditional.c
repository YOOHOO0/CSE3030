int conditional(int a, int b, int c) {
    return (((!(a) << 31) >> 31 & c) \
    | (~((!(a) << 31) >> 31) & b));
}