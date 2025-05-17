#ifndef PRETTY_PRINTER_H
#define PRETTY_PRINTER_H

#define print(x) \
int main() { \
    __print(x) \
    return 0; \
}

#define __print(x) _Generic((x), \
    char *: __print_str, \
    int: __print_int)(x);

void __print_str(char *s);
void __print_int(int n);

#endif //PRETTY_PRINTER_H

