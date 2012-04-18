CC      = gcc
LIBS    = 
DEFS    = -DDEBUG
CFLAGS	= -c -Wall -DDEBUG -g

SOURCES	= printword.c helloworld.c

OBJECTS	= $(SOURCES:.c=.o)
TARGET	= hello

all: $(SOURCES) $(TARGET)

.c.o:
	$(CC) $(CFLAGS) $(DEFS) $< -o $@

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIBS) -o $@

clean:
	rm $(OBJECTS)
	rm $(TARGET)
