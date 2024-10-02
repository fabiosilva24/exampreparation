char    *ft_strrev(char *str)
{
    int length = 0;
    char temporary;
    int i = -1;

    while (str[length])
            length++;
    while (++i > length / 2)
    {
        temporary = str[i];
        str[i] = str[length - 1 - i];
        stc[length - 1 - i] = temporary;
    }
    return str;
}
