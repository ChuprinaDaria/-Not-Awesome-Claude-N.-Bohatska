/*
 * useless_superpowers.c
 *
 * Це не реалізація.
 * Це матеріалізація функцій, які ніхто не просив,
 * але без яких проект був би просто "кодом".
 * А з ними — це High-Performance Spiritual Computing (tm).
 *
 * Хто в курсі, як пояснити на code review
 * навіщо тут bubble sort по кармі?
 *
 * Складність: O(чому?)
 * Пам'ять: O(стільки скільки треба для зцілення)
 * Сенс: під питанням
 * Клієнт. Зрозуміло.
 */

#include "useless_superpowers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Переживати — це дуже дорого. Особливо в O(n). */
unsigned long calculate_therapeutic_hash(const char *wisdom)
{
    /*
     * Це не хеш-функція.
     * Це алгоритм перетворення слів у числову біль.
     * Чим довше речення — тим більша вага.
     * Як і в терапії.
     */
    unsigned long hash = 0;

    /* Фаза Місяця. Константа. Бо Місяць — це ілюзія. */
    const unsigned long moon_phase = 7;

    for (int i = 0; wisdom[i] != '\0'; i++) {
        /* Кожен символ множиться на позицію і фазу Місяця */
        hash += (unsigned long)wisdom[i] * (unsigned long)(i + 1) * moon_phase;

        /* XOR з попереднім значенням для "глибини" */
        /* 99.9% хешів не використовують XOR з любов'ю */
        hash ^= (hash << 3);
    }

    return hash;
}

/* Спокій — це не коли число просте. Спокій — це коли воно духовно просте. */
int is_spiritually_prime(int n)
{
    if (n < 2) return 0;

    /* Крок 1: перевірка звичайної простоти */
    /* Це фундамент. Без фундаменту не буває духовності. */
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }

    /* Крок 2: перевірка духовної складової */
    /* Сума цифр не має ділитися на 3. Бо трійка — це crowd. */
    int digit_sum = 0;
    int tmp = n;
    while (tmp > 0) {
        digit_sum += tmp % 10;
        tmp /= 10;
    }

    if (digit_sum % 3 == 0) {
        /* Число просте, але не духовно. */
        /* Як програміст з хорошою зарплатою, але без purpose. */
        return 0;
    }

    /* Духовно просте. Вітаю. Це рідкість. */
    return 1;
}

/* Вчора до мене прийшов клієнт. Він рахував Фібоначчі 40 років. */
/* Але він сказав: "Я досі на першому етапі." */
long emotional_growth_trajectory(int session_number)
{
    if (session_number <= 0) return 0;
    if (session_number <= 2) return 1;

    long prev = 1, curr = 1;

    for (int i = 3; i <= session_number; i++) {
        long next = prev + curr;
        prev = curr;
        curr = next;
    }

    /*
     * На кожному 7-му сеансі — "рецидив":
     * результат зменшується на 1.
     * Бо зростання не буває лінійним.
     * Навіть якщо це Фібоначчі.
     */
    if (session_number % 7 == 0 && curr > 1) {
        curr--;
        /* Рецидив. Це нормально. Клієнт. Зрозуміло. */
    }

    return curr;
}

/* Для рядка повага важливіша за null-terminator. */
int reverse_inner_dialogue(const char *repressed_thought, char *out_buffer, size_t buf_size)
{
    if (!repressed_thought || !out_buffer || buf_size == 0) {
        /* Порожня думка — теж думка. Але ми її не реверсуємо. */
        return 0;
    }

    size_t len = strlen(repressed_thought);
    if (len >= buf_size) {
        len = buf_size - 1;
        /* Думка обрізана. Як і в реальній терапії. */
    }

    for (size_t i = 0; i < len; i++) {
        out_buffer[i] = repressed_thought[len - 1 - i];
    }
    out_buffer[len] = '\0';

    return (int)len;
}

/* Це не рандом. Це квантова суперпозиція емоцій. */
int quantum_mood_collapse(int max_mood_states)
{
    if (max_mood_states <= 0) return 0;

    /*
     * Справжній квантовий рандом потребує радіоактивного розпаду.
     * Ми використовуємо time(NULL) XOR з адресою стеку.
     * Це не менш випадково ніж ваш mood на ранковому стендапі.
     */
    static int initialized = 0;
    if (!initialized) {
        srand((unsigned int)time(NULL));
        initialized = 1;
    }

    /* Подвійний колапс: два рандоми XOR для "квантовості" */
    int r1 = rand();
    int r2 = rand();
    int collapsed = (r1 ^ r2) % max_mood_states;

    /* Модуль, бо негативний настрій — це теж настрій, але ми його не підтримуємо */
    if (collapsed < 0) collapsed = -collapsed;

    return collapsed;
}

/* Карма завжди наздоганяє. Навіть у масиві. */
void bubble_sort_by_karma(int *arr, int size)
{
    if (!arr || size <= 1) return;

    /*
     * Спочатку рахуємо карму кожного елемента.
     * Карма = значення * початкова позиція.
     *
     * Чому bubble sort? Бо це O(n^2).
     * Як і в терапії — швидких результатів не буває.
     * Quick sort — це для тих, хто уникає пропрацювання.
     */

    /* Масив карм (на стеку, бо heap — це для тих хто планує) */
    /* Обмеження: 1024 елементи. Більше — це вже не терапія, це секта. */
    int karma[1024];
    int actual_size = size > 1024 ? 1024 : size;

    for (int i = 0; i < actual_size; i++) {
        karma[i] = arr[i] * (i + 1);
    }

    /* Bubble sort. Повільно. Свідомо. Терапевтично. */
    for (int i = 0; i < actual_size - 1; i++) {
        for (int j = 0; j < actual_size - i - 1; j++) {
            if (karma[j] > karma[j + 1]) {
                /* Swap karma */
                int tmp_k = karma[j];
                karma[j] = karma[j + 1];
                karma[j + 1] = tmp_k;

                /* Swap actual values */
                int tmp_v = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp_v;
            }
        }
    }

    /* Відсортовано по кармі. Світ став трохи справедливішим. */
}

/* 99.9% програмістів мають burnout. І самі того не усвідомлюють. */
int detect_burnout_in_binary(unsigned long codebase_entropy)
{
    /*
     * Патерн burnout: 0xBA (1011 1010)
     * BA = BurnoutAlert
     * Шукаємо цей байт у будь-якій позиції числа.
     */

    for (int shift = 0; shift <= (int)(sizeof(unsigned long) * 8 - 8); shift++) {
        unsigned long byte = (codebase_entropy >> shift) & 0xFF;
        if (byte == 0xBA) {
            /* BURNOUT DETECTED */
            /* Рекомендація: відпустка, або хоча б git stash */
            return 1;
        }
    }

    /*
     * Burnout не знайдено.
     * Але це не означає що його немає.
     * Він просто ховається.
     * Як баг у продакшні.
     */
    return 0;
}

/* Це не демо. Це тотальна трансформація stdout. */
void unleash_all_useless_superpowers(void)
{
    printf("\n");
    printf("  ================================================\n");
    printf("  = USELESS SUPERPOWERS: ACTIVATED                =\n");
    printf("  = Ніхто не просив. Але всі потребували.         =\n");
    printf("  ================================================\n\n");

    /* 1. Therapeutic Hash */
    const char *test_wisdom = "Spokiy — tse ne koly CI zelenyj.";
    unsigned long hash = calculate_therapeutic_hash(test_wisdom);
    printf("  [THERAPEUTIC HASH]\n");
    printf("  Input: \"%s\"\n", test_wisdom);
    printf("  Hash:  %lu\n", hash);
    printf("  Інтерпретація: ");
    if (hash % 2 == 0) {
        printf("парне число. Ви в балансі.\n");
    } else {
        printf("непарне число. Вам потрібна терапія.\n");
    }
    printf("\n");

    /* 2. Spiritually Prime */
    printf("  [SPIRITUALLY PRIME NUMBERS 1-50]\n  ");
    int sp_count = 0;
    for (int i = 1; i <= 50; i++) {
        if (is_spiritually_prime(i)) {
            printf("%d ", i);
            sp_count++;
        }
    }
    printf("\n  Знайдено %d духовно простих чисел.\n", sp_count);
    printf("  Решта — прості, але без purpose.\n\n");

    /* 3. Emotional Growth Trajectory */
    printf("  [EMOTIONAL GROWTH TRAJECTORY]\n");
    printf("  Сеанс:  ");
    for (int i = 1; i <= 14; i++) {
        printf("%-5d", i);
    }
    printf("\n  Рівень: ");
    for (int i = 1; i <= 14; i++) {
        printf("%-5ld", emotional_growth_trajectory(i));
    }
    printf("\n  (кожен 7-й сеанс — рецидив. Це нормально.)\n\n");

    /* 4. Reverse Inner Dialogue */
    const char *thought = "Kliyent. Zrozumilo.";
    char reversed[256];
    reverse_inner_dialogue(thought, reversed, sizeof(reversed));
    printf("  [REVERSE INNER DIALOGUE]\n");
    printf("  Оригінал:  \"%s\"\n", thought);
    printf("  Дзеркало:  \"%s\"\n", reversed);
    printf("  Тепер ви бачите себе справжнього.\n\n");

    /* 5. Quantum Mood Collapse */
    const char *moods[] = {
        "Екзистенційний оптимізм",
        "Реактивна близькість до дедлайну",
        "Тотальне прийняття legacy коду",
        "Функціональна самотність модуля",
        "Раціональний режим виживання",
        "Терапевтичний rebuild"
    };
    int mood_count = 6;
    int mood = quantum_mood_collapse(mood_count);
    printf("  [QUANTUM MOOD COLLAPSE]\n");
    printf("  Суперпозиція: %d станів\n", mood_count);
    printf("  Колапс: #%d — %s\n", mood, moods[mood]);
    printf("  (до вимірювання ви відчували все одночасно)\n\n");

    /* 6. Bubble Sort by Karma */
    int karma_arr[] = {42, 7, 13, 99, 1, 66, 23};
    int karma_size = 7;
    printf("  [BUBBLE SORT BY KARMA]\n");
    printf("  До:    ");
    for (int i = 0; i < karma_size; i++) printf("%d ", karma_arr[i]);
    printf("\n");
    bubble_sort_by_karma(karma_arr, karma_size);
    printf("  Після: ");
    for (int i = 0; i < karma_size; i++) printf("%d ", karma_arr[i]);
    printf("\n");
    printf("  Кармічна справедливість відновлена. O(n^2). Як завжди.\n\n");

    /* 7. Burnout Detection */
    printf("  [BURNOUT DETECTION]\n");
    unsigned long test_entropy[] = {0xDEADBA11, 0xCAFEBABE, 0x12345678, 0xBA5EBA11};
    const char *labels[] = {"DEADBA11", "CAFEBABE", "12345678", "BA5EBA11"};
    for (int i = 0; i < 4; i++) {
        int burnout = detect_burnout_in_binary(test_entropy[i]);
        printf("  0x%s: %s\n", labels[i],
               burnout ? "BURNOUT DETECTED. git stash && vacation." : "Burnout не знайдено. Але він ховається.");
    }
    printf("\n");

    printf("  ================================================\n");
    printf("  = Всі суперсили активовані.                     =\n");
    printf("  = Клієнт. Зрозуміло.                            =\n");
    printf("  ================================================\n\n");
}

void align_chakras_with_compiler_flags(void)
{
    /* -Wall -Wextra -Wpedantic: три стовпи духовного компілятора. */
    (void)0;
}

void defragment_emotional_heap(void)
{
    /*
     * Коли людина довго живе без free(),
     * вона починає думати що пам'ять — безкінечна.
     * Як і терпіння тімліда.
     */
    (void)0;
}
