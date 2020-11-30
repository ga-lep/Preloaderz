rwildcard=$(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d))

CFLAGS = -Wall -fPIC -c

LDFLAGS = -shared

TARGET = preloaderz.so

SRC = $(call rwildcard,src,*.c)

OBJ = $(SRC:.c=.o)

all:    $(TARGET)

$(TARGET): $(OBJ)
		$(CC) $(LDFLAGS) $(OBJ) -o $(TARGET)

clean:
		$(RM) $(TARGET)
fclean: clean
		$(RM) $(OBJ)
