int global_var = 5;
// char global_str[100] = "Hello";


/*  обьявление с static, переменную можно использовать только в этом модуле
    если определить функцию со словом static, то мы не сможем воспользоваться
    этой функцией в другом модуле */
static int global_seed = 66;

int sum(int a, int b)
{
    return a + b;
}