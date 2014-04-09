#include "libexample.h"

static unsigned char
_example_invoke_0x01(void)
{
    return 0x01;
}
static unsigned char
_example_invoke_0x02(void)
{
    return 0x02;
}
static unsigned char
_example_invoke_0x04(void)
{
    return 0x04;
}
static unsigned char
_example_invoke_0x08(void)
{
    return 0x08;
}
static unsigned char
_example_invoke_0x10(void)
{
    return 0x10;
}
static unsigned char
_example_invoke_0x20(void)
{
    return 0x20;
}
static unsigned char
_example_invoke_0x40(void)
{
    return 0x40;
}
static unsigned char
_example_invoke_0x80(void)
{
    return 0x80;
}

unsigned char
example_invoke(unsigned char in)
{
    unsigned char out = 0;

    if (in & 0x10) out |= _example_invoke_0x01();
    if (in & 0x20) out |= _example_invoke_0x02();
    if (in & 0x40) out |= _example_invoke_0x04();
    if (in & 0x80) out |= _example_invoke_0x08();
    if (in & 0x01) out |= _example_invoke_0x10();
    if (in & 0x02) out |= _example_invoke_0x20();
    if (in & 0x04) out |= _example_invoke_0x40();
    if (in & 0x08) out |= _example_invoke_0x80();

    return out;
}
