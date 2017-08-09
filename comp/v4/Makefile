TARGET ?= comp.out
BUILD ?= ./build

CC := gcc

LEX := ./lexyacc/pearlang.l
YACC := ./lexyaxx/pearlang.y

SRC := ./src

SRCS := $(shell find $(SRC) -name *.c)
OBJS := $(SRCS:%=$(BUILD)/%.o)
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP

-all:
	flex --outfile=./src/lex.yy.c ./lexyacc/pearlang.l
	bison -d -o ./src/pearlang.tab.c ./lexyacc/pearlang.y
	$(CC) -ll $(INC_FLAGS) $(SRCS) -o ./build/$(TARGET)

-include $(DEPS)

MKDIR_P ?= mkdir -p
