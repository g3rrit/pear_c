TARGER ?= comp.out
BUILD ?= ./build

LEX := ./lexyacc/pearlang.l
YACC := ./lexyaxx/pearlang.y

SRC := ./src

SRCS := $(shell find $(SRC) -name *.c)
OBJS := $(SRCS:%=$(BUILD)/%.o)
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
		$(CC) $(OBJS) -o $@ $(LDFLAGS)

# c source
$(BUILD)/%.c.o: %.c
 	$(MKDIR_P) $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@
	$(CC) -ll pearlang.tab.c lex.yy.c

pearlang.tab.c pearlang.tab.h: $(YACC)
	bison -d $(YACC)

lex.yy.c: $(LEX)
	flex $(LEX)

-include $(DEPS)

MKDIR_P ?= mkdir -p
