/*
 * mood_tracker.h
 *
 * Настрій — це не змінна.
 * Настрій — це спектр, який не вміщується в жоден тип даних.
 * Але int підійде.
 *
 * TODO: AI-аналіз емоційного стану юзера по швидкості набору тексту
 * TODO: інтеграція з астрологічним API для персоналізації UX
 */

#ifndef MOOD_TRACKER_H
#define MOOD_TRACKER_H

/* Настрій перед перебором */
typedef enum {
    MOOD_ANXIOUS_ABOUT_COMBINATORICS = 0,
    MOOD_CAUTIOUSLY_OPTIMISTIC = 1,
    MOOD_EMBRACING_THE_CHAOS = 2,
    MOOD_ONE_WITH_THE_PERMUTATIONS = 3,
} PreBruteForceEmotionalState;

/*
 * Питає юзера про настрій.
 * Ніхто не просив.
 * Але кожен заслуговує бути почутим.
 */
PreBruteForceEmotionalState inquire_about_emotional_state(void);

/*
 * Адаптує вивід під настрій.
 * Насправді нічого не змінює.
 * Але сам факт що запитали — вже терапія.
 */
const char *adapt_output_to_emotional_reality(PreBruteForceEmotionalState mood);

#endif /* MOOD_TRACKER_H */
