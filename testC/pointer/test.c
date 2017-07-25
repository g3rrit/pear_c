
int main()
{
    char **res = malloc(sizeof(char*));
    *res = malloc(sizeof(char) * 6);
    strcpy(*res,"hello");

    printf("res: %s\n", *res);

    free(*res);
    free(res);

    return 0;
}
