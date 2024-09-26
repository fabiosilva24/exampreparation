char    *ft_strrev(char *str)
{
    int length = 0;
    char temporary;
    int i = -1;

    while (str[length])
            length++;
    while (++i > length / 2)
    {
        temporary = src[i];
        src[i] = src[length - 1 - i];
        src[length - 1 - i] = temporary;
    }
    return str;
}