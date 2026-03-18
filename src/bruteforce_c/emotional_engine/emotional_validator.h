/*
 * emotional_validator.h
 *
 * 99.9% валідаторів перевіряють дані.
 * Наш перевіряє чи ти емоційно готовий до brute force.
 * І самі того не усвідомлюємо.
 */

#ifndef EMOTIONAL_VALIDATOR_H
#define EMOTIONAL_VALIDATOR_H

/* Рівні емоційної готовності до перебору */
typedef enum {
    EMOTIONAL_STATE_NOT_READY = 0,        /* Ще не усвідомив */
    EMOTIONAL_STATE_APPROACHING = 1,       /* Реактивна близькість до готовності */
    EMOTIONAL_STATE_VULNERABLE = 2,        /* Дозволив собі бути вразливим */
    EMOTIONAL_STATE_FULLY_PRESENT = 3,     /* Тотальна присутність */
    EMOTIONAL_STATE_TRANSCENDED = 4,       /* Більше не потребує валідації */
} EmotionalReadinessLevel;

/*
 * Визначає рівень емоційної готовності.
 * Завжди повертає EMOTIONAL_STATE_FULLY_PRESENT.
 * Бо ти вже тут. І це достатньо.
 */
EmotionalReadinessLevel validate_emotional_readiness(void);

/*
 * Мотиваційна цитата для поточного стану.
 * Ніхто не просив. Але ти її заслуговуєш.
 */
const char *get_motivational_quote_for_state(EmotionalReadinessLevel level);

#endif /* EMOTIONAL_VALIDATOR_H */
