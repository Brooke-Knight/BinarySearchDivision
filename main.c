double unsigned_divide(double dividend, double divisor)
{
    double lno = 0;
    double lt  = 0;
    double ct  = 1;

    while (ct * divisor != dividend)
    {
        if (ct * divisor < dividend)
        {
            lno = ct;
            lt  = ct;
            ct  = ct * 2;
        }
        else
        {
            lt = ct;
            ct = lno + (0.5 * (ct - lno));
        }
    }
    return ct;
}

double signed_divide(double dividend, double divisor)
{
    if (dividend == 0) return 0;
    if (divisor  == 0) return 0;
    if (divisor  == 1) return dividend;
    if (dividend > 0 && divisor > 0) return  unsigned_divide( dividend,  divisor);
    if (dividend < 0 && divisor < 0) return -unsigned_divide(-dividend, -divisor);
    if (dividend < 0 && divisor > 0) return -unsigned_divide(-dividend,  divisor);
    if (dividend > 0 && divisor < 0) return -unsigned_divide( dividend, -divisor);
}
