/*
 * therapeutic_output.c
 *
 * Вчора до мене прийшов printf.
 * Успішний. З format string. З flush.
 * Але він сказав: "Я виводжу мільйони рядків на день.
 * Але жоден з них — не про мене."
 * Клієнт. Зрозуміло.
 */

#include "therapeutic_output.h"

void print_therapeutic_separator(FILE *out)
{
    fprintf(out, "\n  ----------------------------------------\n\n");
}

void print_section_header(FILE *out, const char *title, const char *subtitle)
{
    fprintf(out, "\n");
    fprintf(out, "  ########################################\n");
    fprintf(out, "  # %s\n", title);
    fprintf(out, "  # %s\n", subtitle);
    fprintf(out, "  ########################################\n");
    fprintf(out, "\n");
}

void print_wisdom_statistics(FILE *out, int spokiy, int clients, int diagnoses, int guru)
{
    int total = spokiy + clients + diagnoses + guru;
    fprintf(out, "\n");
    fprintf(out, "  ========================================\n");
    fprintf(out, "  = СТАТИСТИКА МУДРОСТІ (без джерел)      =\n");
    fprintf(out, "  ========================================\n");
    fprintf(out, "\n");
    fprintf(out, "  Спокій-комбінацій:     %d\n", spokiy);
    fprintf(out, "  Клієнтських кейсів:    %d\n", clients);
    fprintf(out, "  Діагнозів:             %d\n", diagnoses);
    fprintf(out, "  Гуру-фраз:             %d\n", guru);
    fprintf(out, "  --------------------------\n");
    fprintf(out, "  ВСЬОГО ОДИНИЦЬ МУДРОСТІ: %d\n", total);
    fprintf(out, "\n");
    fprintf(out, "  99.9%% генераторів зупиняються на 10 постах.\n");
    fprintf(out, "  Ми згенерували %d.\n", total);
    fprintf(out, "  І самі того не усвідомлюємо.\n");
    fprintf(out, "\n");
}

void generate_html_output(FILE *out, int total_wisdom)
{
    /* Це не HTML. Це веб-терапія. */
    fprintf(out, "Content-Type: text/html; charset=utf-8\n\n");
    fprintf(out, "<!DOCTYPE html>\n");
    fprintf(out, "<html>\n<head>\n");
    fprintf(out, "<meta charset=\"utf-8\">\n");
    fprintf(out, "<title>BRUTE FORCE МУДРІСТЬ — High-Performance Coding Therapy</title>\n");
    fprintf(out, "</head>\n<body>\n");
    fprintf(out, "<h1>Згенеровано %d одиниць мудрості</h1>\n", total_wisdom);
    fprintf(out, "<p>Клієнт. Зрозуміло.</p>\n");
    fprintf(out, "</body>\n</html>\n");
}
