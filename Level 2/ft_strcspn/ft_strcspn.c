size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;

    while (s[i])
    {
        j = 0;
    while (reject[i])
    {
        if (reject == s[i])
            return (i);
        j++;
    }
    i++;
    }
    return i;
}