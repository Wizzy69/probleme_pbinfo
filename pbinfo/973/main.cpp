#include <iostream>
#include <cstring>

bool CuvBun(const char *p, int index, int len, const char *searchString_)
{
    if (index == len)
        return true;
    if (strchr(searchString_, p[index]) == NULL)
        return false;
    return CuvBun(p, index + 1, len, searchString_);
}

void ParcuregereSir(char *p)
{
    if (p == NULL)
        return;

    if (CuvBun(p, 0, strlen(p), "aeiou"))
        std::cout << p << std::endl;

    p = strtok(NULL, " ");
    ParcuregereSir(p);
}

int main()
{
    char c[256];
    std::cin.getline(c, 256);
    ParcuregereSir(strtok(c, " "));
    return 0;
}