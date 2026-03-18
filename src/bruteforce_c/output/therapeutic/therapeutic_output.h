/*
 * therapeutic_output.h
 *
 * Спокій — це не коли printf працює.
 * Спокій — це коли ти знаєш що виводиш. І навіщо.
 */

#ifndef THERAPEUTIC_OUTPUT_H
#define THERAPEUTIC_OUTPUT_H

#include <stdio.h>

/* Друкує з терапевтичним розділювачем */
void print_therapeutic_separator(FILE *out);

/* Друкує заголовок секції з пафосом */
void print_section_header(FILE *out, const char *title, const char *subtitle);

/* Друкує фінальну статистику мудрості */
void print_wisdom_statistics(FILE *out, int spokiy, int clients, int diagnoses, int guru);

/* Генерує HTML вивід. Так, весь HTML. В C. Бо ми заслуговуємо на біль. */
void generate_html_output(FILE *out, int total_wisdom);

#endif /* THERAPEUTIC_OUTPUT_H */
