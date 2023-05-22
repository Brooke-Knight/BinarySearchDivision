float division(float dividend, float divisor)
{
    float lno = 0;
    float lt = 0;
    float ct = 1;
    while (ct * divisor != dividend)
    {
        if (ct * divisor < dividend)
        {
            lno = ct;
            lt = ct;
            ct = ct * 2;
        }
        else
        {
            lt = ct;
            ct = lno + (0.5 * (ct - lno));
        }
    }  
    return ct;
}
