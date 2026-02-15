CC = gcc
TARGET = epoch
SRC = epoch.c
INSTALL_DIR = /usr/bin

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

install: $(TARGET)
	install -m 755 $(TARGET) $(INSTALL_DIR)

clean:
	rm -f $(TARGET)

uninstall:
	rm -f $(INSTALL_DIR)/$(TARGET)

.PHONY: all install clean uninstall
