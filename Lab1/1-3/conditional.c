#include "conditional.h"

/*
 * conditional(x, y, z): same as x ? y : z
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 */
int conditional(int a, int b, int c) {
    return (((!(a) << 31) >> 31 & c) \
    | (~((!(a) << 31) >> 31) & b));
}