# 定义编译器和编译选项
CC = gcc
CFLAGS = -Wall -g  # -Wall显示警告, -g生成调试信息

# 目标文件
TARGET = myTest

# 默认目标(执行make时默认编译)
all: $(TARGET)

# 编译规则：从myTest.c生成可执行文件
$(TARGET): myTest.c
	$(CC) $(CFLAGS) -o $@ $<

# 清理编译生成的文件(执行make clean)
clean:
	rm -f $(TARGET)