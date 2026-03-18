/*
 * diagnosis_data.h
 *
 * Вчора до мене прийшов header файл.
 * Успішний. З pragma once. З include guards.
 * Але він сказав: "Я захищений від подвійного включення.
 * Але не від подвійного вигорання."
 *
 * Клієнт. Зрозуміло.
 */

#ifndef DIAGNOSIS_DATA_H
#define DIAGNOSIS_DATA_H

static const char *DIAGNOSIS_INTRO[] = {
    "Коли розробник боїться втратити роботу, він часто:",
    "Коли людина довго живе з legacy кодом, у неї є тільки дві позиції:",
    "Замість того, щоб піти в емоційний контакт з кодом, він іде в:",
    "Розробник в кризі зазвичай:",
    "Коли Senior не може відпустити контроль, він стає:",
};

#define DIAGNOSIS_INTRO_COUNT (sizeof(DIAGNOSIS_INTRO) / sizeof(DIAGNOSIS_INTRO[0]))

static const char *DIAGNOSIS_POINTS[] = {
    "ідеалізує фреймворк",
    "зменшує свій внесок",
    "підлаштовується під code review",
    "холодний до нових технологій",
    "відсторонений від команди",
    "ще більше працює",
    "контролює Jira замість того щоб жити",
    "переписує все з нуля",
    "відповідає на Slack о 3 ночі",
    "боїться відпустки",
    "робить рефакторинг замість терапії",
};

#define DIAGNOSIS_POINTS_COUNT (sizeof(DIAGNOSIS_POINTS) / sizeof(DIAGNOSIS_POINTS[0]))

#endif /* DIAGNOSIS_DATA_H */
