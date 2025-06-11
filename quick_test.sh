#!/bin/bash
# quick_test.sh

echo "Compiling ft_printf..."
make re

if [ $? -eq 0 ]; then
    echo "✅ Compilation successful"
    
    # Create a simple test
    cat > temp_test.c << 'EOF'
#include "ft_printf.h"
#include <stdio.h>

int main() {
    ft_printf("Hello: %s\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Address: %p\n", &main);
    ft_printf("Percent: %%\n");
    return 0;
}
EOF
    
    gcc temp_test.c libftprintf.a -o temp_test
    if [ $? -eq 0 ]; then
        echo "Running basic test:"
        ./temp_test
        rm temp_test temp_test.c
    fi
else
    echo "❌ Compilation failed"
fi
