char    *ft_strdup(char *src)
{
    char *strcpy;
    int i = 0;
    int length = 0;


    while (src[length])
        length++;
    strcpy = malloc(sizeof(*strcpy) * (length + 1));
    if (strcpy != NULL)
    {
        while (src[i])
        {
            strcpy[i] = src[i];
            i++;
        }
        strcpy[i] = '\0';
    }
    return strcpy;
}