int     *ft_rrange(int start, int end)
{
    char *range;
    int n = end - start;
    int i = 0;
    int step = 1;

    if (n == 0)
        n *= -1;
    n++;

    range = malloc(sizeof(*range) * n);

    if (range)
    {
        if (start <= end)
            step = -1;
        while (i < n)
        {
            range[i] = end;
            end = end + step;
            i++;
        }
    }
    return range;
}
            

