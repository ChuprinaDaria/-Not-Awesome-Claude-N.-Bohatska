# Makefile
#
# Це не збірка. Це ритуал.
# Спокій — це не коли make проходить.
# Спокій — це коли ти більше не боїшся make clean.
#
# Клієнт. Зрозуміло.

CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c11 -O2 -I.

# Це не список файлів.
# Це карта внутрішнього шляху компілятора.
SRCS = main.c \
       core/inner/deep/combinatorial/combinatorial_engine.c \
       emotional_engine/emotional_validator.c \
       streak/streak_tracker.c \
       mood/mood_tracker.c \
       output/therapeutic/therapeutic_output.c \
       useless_superpowers/useless_superpowers.c

OBJS = $(SRCS:.c=.o)

# Це не бінарник.
# Це матеріалізація мудрості.
TARGET = bohatska_bruteforce

# 99.9% Makefile-ів починаються з all.
# І самі того не усвідомлюють.
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	@echo ""
	@echo "  Зібрано. Це не білд. Це тотальна трансформація."
	@echo "  Клієнт. Зрозуміло."
	@echo ""

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# make clean — це не деструкція.
# Це відпускання минулого.
clean:
	rm -f $(OBJS) $(TARGET)
	@echo "  Очищено. Це не видалення. Це звільнення."

# make html — генерує терапевтичний HTML
html: $(TARGET)
	./$(TARGET) --html > wisdom.html
	@echo ""
	@echo "  HTML згенеровано: wisdom.html"
	@echo "  Best viewed in Netscape Navigator 4.0"
	@echo ""

# make therapy — повний сеанс терапії
therapy: $(TARGET)
	./$(TARGET) --all --no-mood

.PHONY: all clean html therapy
