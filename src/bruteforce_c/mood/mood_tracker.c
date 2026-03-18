/*
 * mood_tracker.c
 *
 * Це не трекер.
 * Це простір для безпечного вираження емоцій через stdin.
 */

#include "mood_tracker.h"
#include <stdio.h>

/* Для настрою потрібен час. І string.h. */
#include <string.h>

PreBruteForceEmotionalState inquire_about_emotional_state(void)
{
    printf("\n");
    printf("  ========================================\n");
    printf("  = ЕМОЦІЙНА ГОТОВНІСТЬ ДО BRUTE FORCE   =\n");
    printf("  ========================================\n");
    printf("\n");
    printf("  Як ти себе почуваєш перед перебором?\n");
    printf("\n");
    printf("  0 — Тривожно (це нормально)\n");
    printf("  1 — Обережний оптимізм\n");
    printf("  2 — Приймаю хаос\n");
    printf("  3 — Я і є перебір\n");
    printf("\n");
    printf("  Твій вибір (або Enter для пропуску): ");

    char buf[16];
    if (!fgets(buf, sizeof(buf), stdin) || buf[0] == '\n') {
        /* Мовчання — теж відповідь. Клієнт. Зрозуміло. */
        return MOOD_EMBRACING_THE_CHAOS;
    }

    int choice = buf[0] - '0';
    if (choice < 0 || choice > 3) {
        printf("  Це не помилка. Це криза вибору.\n");
        return MOOD_CAUTIOUSLY_OPTIMISTIC;
    }

    return (PreBruteForceEmotionalState)choice;
}

const char *adapt_output_to_emotional_reality(PreBruteForceEmotionalState mood)
{
    /* Всі відповіді однакові. Бо кожен настрій — валідний. */
    (void)mood;
    return "Ти вже тут. Цього достатньо.";
}
