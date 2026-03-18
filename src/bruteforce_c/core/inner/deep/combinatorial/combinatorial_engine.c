/*
 * combinatorial_engine.c
 *
 * Це не brute force.
 * Це тотальна трансформація простору комбінацій.
 *
 * Складність: O(все).
 * Пам'ять: O(біль).
 * Радість: O(1). Константна.
 *
 * Клієнт. Зрозуміло.
 */

#include "combinatorial_engine.h"
#include "spokiy_data.h"
#include "diagnosis_data.h"
#include "client_data.h"
#include "guru_data.h"

int initiate_deep_inner_combinatorial_awakening(BruteForceExistentialState *state)
{
    /*
     * Спокій — це не коли state ініціалізований.
     * Спокій — це коли ти приймаєш що всі поля — нулі.
     */
    state->spokiy_generated = 0;
    state->client_generated = 0;
    state->diagnosis_generated = 0;
    state->guru_generated = 0;
    state->total_wisdom_units = 0;
    state->emotional_readiness_score = 100; /* Завжди 100. Бо ти вартий. */
    state->consecutive_runs_without_crying = 0;

    return 0; /* 0 — це не нуль. Це початок. */
}

int bruteforce_all_spokiy_permutations(BruteForceExistentialState *state, FILE *out)
{
    /*
     * Перебираємо КОЖНУ комбінацію "Спокій — це не X. Спокій — це Y."
     * Бо кожна комбінація заслуговує бути почутою.
     * Навіть ті, що не мають сенсу.
     * Особливо ті, що не мають сенсу.
     */
    int count = 0;

    for (int i = 0; i < (int)SPOKIY_NOT_COUNT; i++) {
        for (int j = 0; j < (int)SPOKIY_YES_COUNT; j++) {
            fprintf(out, "  [%d] Спокій — це не %s.\n"
                         "       Спокій — це %s.\n\n",
                    count + 1, SPOKIY_NOT[i], SPOKIY_YES[j]);
            count++;
        }
    }

    state->spokiy_generated = count;
    state->total_wisdom_units += count;
    return count;
}

int bruteforce_all_client_story_permutations(BruteForceExistentialState *state, FILE *out)
{
    /*
     * Кожна історія * кожна цитата = кожне серце, що б'ється в FAANG.
     */
    int count = 0;

    for (int i = 0; i < (int)CLIENT_STORIES_COUNT; i++) {
        for (int j = 0; j < (int)CLIENT_QUOTES_COUNT; j++) {
            fprintf(out, "  [%d] %s\n"
                         "       \"%s\"\n"
                         "       Клієнт. Зрозуміло.\n\n",
                    count + 1, CLIENT_STORIES[i], CLIENT_QUOTES[j]);
            count++;
        }
    }

    state->client_generated = count;
    state->total_wisdom_units += count;
    return count;
}

/*
 * Допоміжна функція для генерації комбінацій діагнозів.
 * Рекурсія — це не повторення.
 * Рекурсія — це повернення до себе справжнього.
 */
static void generate_diagnosis_combo(
    FILE *out, const char *intro,
    int *indices, int depth, int max_depth,
    int start, int *counter)
{
    if (depth == max_depth) {
        (*counter)++;
        fprintf(out, "  [%d] %s\n", *counter, intro);
        for (int k = 0; k < max_depth; k++) {
            fprintf(out, "       * %s\n", DIAGNOSIS_POINTS[indices[k]]);
        }
        fprintf(out, "\n");
        return;
    }

    for (int i = start; i < (int)DIAGNOSIS_POINTS_COUNT; i++) {
        indices[depth] = i;
        generate_diagnosis_combo(out, intro, indices, depth + 1,
                                 max_depth, i + 1, counter);
    }
}

int bruteforce_all_diagnosis_permutations(BruteForceExistentialState *state, FILE *out)
{
    /*
     * C(11, 3) + C(11, 4) + C(11, 5) на кожне інтро.
     * Це не комбінаторика. Це тотальна трансформація діагностики.
     */
    int count = 0;
    int indices[5];

    for (int i = 0; i < (int)DIAGNOSIS_INTRO_COUNT; i++) {
        /* Генеруємо комбінації по 3, 4 і 5 пунктів */
        for (int combo_size = 3; combo_size <= 5; combo_size++) {
            generate_diagnosis_combo(out, DIAGNOSIS_INTRO[i],
                                     indices, 0, combo_size, 0, &count);
        }
    }

    state->diagnosis_generated = count;
    state->total_wisdom_units += count;
    return count;
}

int output_all_guru_wisdom(BruteForceExistentialState *state, FILE *out)
{
    int count = 0;

    /* Гуру-фрази */
    for (int i = 0; i < (int)GURU_PHRASES_COUNT; i++) {
        count++;
        fprintf(out, "  [%d] %s\n\n", count, GURU_PHRASES[i]);
    }

    /* Терапевтичні помилки */
    for (int i = 0; i < (int)THERAPEUTIC_ERRORS_COUNT; i++) {
        count++;
        fprintf(out, "  [%d] %s\n\n", count, THERAPEUTIC_ERRORS[i]);
    }

    state->guru_generated = count;
    state->total_wisdom_units += count;
    return count;
}

int get_total_wisdom_units(const BruteForceExistentialState *state)
{
    return state->total_wisdom_units;
}

void process_inner_conflict(BruteForceExistentialState *state)
{
    /* Коли людина довго живе з внутрішнім критиком. */
    (void)state;
}

void initiate_existential_recalibration(BruteForceExistentialState *state)
{
    /* Це називається реактивна близькість до продакшну. */
    (void)state;
}
