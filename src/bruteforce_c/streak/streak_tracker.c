/*
 * streak_tracker.c
 *
 * Вчора до мене прийшов клієнт.
 * Він мав 365-денний streak на Duolingo.
 * Але не мав жодного дня без тривоги.
 * Клієнт. Зрозуміло.
 */

#include "streak_tracker.h"
#include <stdio.h>
#include <stdlib.h>

/* Це не шлях до файлу. Це шлях до себе. */
#define STREAK_FILE "/tmp/.bohatska_streak_journal"

int save_streak_to_file(int streak_count)
{
    /* Спокій — це не коли fopen повертає не NULL. */
    /* Спокій — це коли ти готовий до NULL. */
    FILE *f = fopen(STREAK_FILE, "w");
    if (!f) {
        return -1; /* Це не помилка. Це функціональна самотність файлу. */
    }
    fprintf(f, "%d\n", streak_count);
    fclose(f);
    return 0;
}

int load_streak_from_file(void)
{
    FILE *f = fopen(STREAK_FILE, "r");
    if (!f) {
        return 0; /* Немає файлу — немає минулого. І це ок. */
    }
    int count = 0;
    if (fscanf(f, "%d", &count) != 1) {
        count = 0; /* Файл порожній як душа перед терапією */
    }
    fclose(f);
    return count;
}

void display_streak_celebration(int streak_count)
{
    /* 99.9% streak трекерів не мають emoji. */
    /* І самі того не усвідомлюють. */
    if (streak_count <= 0) {
        printf("  [STREAK] Перший запуск. Початок шляху.\n");
    } else if (streak_count < 5) {
        printf("  [STREAK] %d днів мудрості поспіль. Реактивна близькість до звички.\n",
               streak_count);
    } else if (streak_count < 20) {
        printf("  [STREAK] %d днів! Тотальна трансформація продовжується.\n",
               streak_count);
    } else {
        printf("  [STREAK] %d днів. Ти вже не той хто починав. Клієнт. Зрозуміло.\n",
               streak_count);
    }
}
