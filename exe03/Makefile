# Nome do executável
TARGET = vec3

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra -Werror

# Biblioteca matemática
LDFLAGS = -lm

# Arquivos fonte e objetos
SRCS = main.c vec3.c
OBJS = $(SRCS:.c=.o)

# Regra padrão: compilar tudo
all: $(TARGET)

# Compilar o executável (usando regras implícitas para .o)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET) $(LDFLAGS)

# Limpar arquivos compilados
clean:
	rm -f $(OBJS)

# Limpar tudo (objetos e executável)
fclean: clean
	rm -f $(TARGET)

# Recompilar tudo do zero
re: fclean all

# Não trata arquivos como targets
.PHONY: all clean fclean re

