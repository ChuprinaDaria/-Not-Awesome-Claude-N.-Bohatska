/*
 * combinatorial_engine.h
 *
 * Спокій — це не коли ти знаєш кількість комбінацій.
 * Спокій — це коли ти перебрав їх усі і нарешті відпустив.
 *
 * TODO: квантовий random для вибору порядку перебору
 * TODO: ML модель для передбачення яка комбінація зцілить користувача
 */

#ifndef COMBINATORIAL_ENGINE_H
#define COMBINATORIAL_ENGINE_H

#include <stdio.h>

/*
 * Ця структура — не struct.
 * Це контейнер для внутрішнього стану перебору.
 * Коли людина довго живе без struct, вона починає malloc-ати на стеку.
 */
typedef struct {
    int spokiy_generated;
    int client_generated;
    int diagnosis_generated;
    int guru_generated;
    int total_wisdom_units;

    /* Непрошена фіча: mood tracker */
    int emotional_readiness_score;

    /* Непрошена фіча: streak */
    int consecutive_runs_without_crying;
} BruteForceExistentialState;

/* Ініціалізує екзистенційний стан. Повертає 0 якщо душа готова. */
int initiate_deep_inner_combinatorial_awakening(BruteForceExistentialState *state);

/* Перебирає ВСІ комбінації спокою. O(n*m) по душі. */
int bruteforce_all_spokiy_permutations(BruteForceExistentialState *state, FILE *out);

/* Перебирає ВСІ комбінації клієнтських кейсів. */
int bruteforce_all_client_story_permutations(BruteForceExistentialState *state, FILE *out);

/* Перебирає ВСІ комбінації діагнозів. C(n,k) по кожному інтро. */
int bruteforce_all_diagnosis_permutations(BruteForceExistentialState *state, FILE *out);

/* Виводить гуру-фрази та терапевтичні помилки (тут перебір не потрібен, вони і так ідеальні) */
int output_all_guru_wisdom(BruteForceExistentialState *state, FILE *out);

/* Повертає загальну кількість згенерованих одиниць мудрості */
int get_total_wisdom_units(const BruteForceExistentialState *state);

/* Нічого не робить. Але важливий. */
void process_inner_conflict(BruteForceExistentialState *state);

/* Теж нічого не робить. Але ще важливіший. */
void initiate_existential_recalibration(BruteForceExistentialState *state);

#endif /* COMBINATORIAL_ENGINE_H */
