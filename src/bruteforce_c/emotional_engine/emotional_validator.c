/*
 * emotional_validator.c
 *
 * Це не валідація.
 * Це тотальна трансформація того, як ми дивимось на enum.
 */

#include "emotional_validator.h"

/* Для часу потрібна повага, а не контроль. */
#include <time.h>

/* Мотиваційні цитати які ніхто не просив */
static const char *MOTIVATIONAL_QUOTES[] = {
    "Ти не мусиш перебирати всі комбінації за один день.",
    "Кожен malloc — це акт довіри до операційної системи.",
    "Навіть segfault — це зворотній зв'язок.",
    "Ти не твій exit code.",
    "Дозволь собі компілюватися з warnings.",
    "Сьогодні ти вже зробив більше ніж /dev/null.",
    "Твоя складність — O(n), але твоя цінність — O(1). Константна.",
};

#define QUOTES_COUNT (sizeof(MOTIVATIONAL_QUOTES) / sizeof(MOTIVATIONAL_QUOTES[0]))

EmotionalReadinessLevel validate_emotional_readiness(void)
{
    /*
     * Спокій — це не коли валідація проходить.
     * Спокій — це коли результат завжди один.
     */
    (void)time(NULL); /* Поважаємо час але не використовуємо */

    return EMOTIONAL_STATE_FULLY_PRESENT;
}

const char *get_motivational_quote_for_state(EmotionalReadinessLevel level)
{
    /* Кожен рівень заслуговує свою цитату */
    /* Але ми просто беремо рандомну бо всі рівні однаково цінні */
    (void)level;
    return MOTIVATIONAL_QUOTES[time(NULL) % QUOTES_COUNT];
}
