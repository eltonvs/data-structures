# DIRS
INCDIR = include
BINDIR = bin
SRCDIR = src
BUILDDIR = build
LIBDIR = lib
# LIB OPTIONS
# TARGET
TARGET1 = $(BINDIR)/stackint
TARGET2 = $(BINDIR)/stackar
# EXTENSIONS
SRCEXT = cpp
HEADEREXT = hpp
# SOURCES LIST
SOURCES1 = $(shell find $(SRCDIR) -type f -name *int.$(SRCEXT))
SOURCES2 = $(shell find $(SRCDIR) -type f -name *ar.$(SRCEXT))
# OBJECTS
OBJS1 = $(patsubst $(SRCDIR)/%, $(BUILDDIR)/%, $(SOURCES1:.$(SRCEXT)=.o))
OBJS2 = $(patsubst $(SRCDIR)/%, $(BUILDDIR)/%, $(SOURCES2:.$(SRCEXT)=.o))
# COMPILER
CC = g++
# FOR CLEANING
RM = /bin/rm
# WARNING FLAG
WARN = -Wall
# DEBUG FLAGS
DEBUG = -g
# LINKING FLAGS
LIBOPTS = -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio
LIBFLAG = -L $(LIBDIR) $(LIBOPTS)
INCFLAG = -I $(INCDIR)
LFLAGS = $(DEBUG) $(WARN) $(INCFLAG) # $(LIBFLAG)
# COMPILATION FLAGS
CFLAGS = $(DEBUG) -c $(WARN) -std=c++11

# ----------------------
# ENTRIES
# ----------------------

$(TARGET1): $(OBJS1)
	@echo "Linking..."
	@echo " $(CC) $^ -o $(TARGET1) $(LFLAGS)"; $(CC) $^ -o $(TARGET1) $(LFLAGS)
$(TARGET2): $(OBJS2)
	@echo "Linking..."
	@echo " $(CC) $^ -o $(TARGET2) $(LFLAGS)"; $(CC) $^ -o $(TARGET2) $(LFLAGS)
$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CFLAGS) $(INCFLAG) -o $@ $<"; $(CC) $(CFLAGS) $(INCFLAG) -o $@ $<

# DUMMY ENTRIES
all:
	@echo "Error! Argument missing (int or ar)"

int: $(TARGET1)
	@echo "Using the stackint"

ar: $(TARGET2)
	@echo "Using the stackar"

clean:
	@echo "Cleaning..."
	@echo " $(RM) -r $(OBJS) $(TARGET1) $(TARGET2)"; $(RM) -r $(OBJS) $(TARGET1) $(TARGET2)

.PHONY: clean
.PHONY: all
.DEFAULT_GOAL := all
