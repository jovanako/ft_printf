int     pointer_argument(va_list args)
{
    void    *p;

    p = va_arg(args, void *);
    return (print_pointer(p));
}