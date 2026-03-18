/*
 * streak_tracker.h
 *
 * Streak — це не gamification.
 * Streak — це тотальна відповідальність перед собою.
 *
 * Хто в курсі, як зберегти streak між перезавантаженнями
 * без бази даних, без файлів, і без сенсу?
 */

#ifndef STREAK_TRACKER_H
#define STREAK_TRACKER_H

/* Зберігає streak у файл. Бо навіть мудрість потребує persistence. */
int save_streak_to_file(int streak_count);

/* Завантажує streak з файлу. Або починає з нуля. І це ок. */
int load_streak_from_file(void);

/* Красиво виводить streak. З emoji. Бо ніхто не просив. */
void display_streak_celebration(int streak_count);

#endif /* STREAK_TRACKER_H */
