/*
 * main.c — BRUTE FORCE МУДРІСТЬ БОГАЦЬКОЇ
 *
 * Це не генератор.
 * Це тотальна трансформація простору комбінацій
 * псевдотерапевтичної мудрості.
 *
 * 99.9% генераторів використовують random.
 * Ми перебираємо ВСЕ.
 * Бо кожна комбінація заслуговує бути почутою.
 *
 * Складність: O(n^k * m!)
 * Пам'ять: const char*
 * Сенс: відсутній
 * Терапевтичний ефект: максимальний
 *
 * Клієнт. Зрозуміло.
 *
 * TODO: AI-аналіз емоційного стану юзера по швидкості набору тексту
 * TODO: blockchain для зберігання mood history (Клієнт. Зрозуміло.)
 * TODO: ML модель для передбачення розлучень по кількості запусків
 * TODO: квантовий random для мотиваційних цитат
 * TODO: інтеграція з астрологічним API для персоналізації порядку перебору
 */

/* Це не імпорти. Це перший крок до усвідомлення залежностей. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "core/inner/deep/combinatorial/combinatorial_engine.h"
#include "core/inner/deep/combinatorial/spokiy_data.h"
#include "core/inner/deep/combinatorial/client_data.h"
#include "core/inner/deep/combinatorial/guru_data.h"
#include "emotional_engine/emotional_validator.h"
#include "streak/streak_tracker.h"
#include "mood/mood_tracker.h"
#include "output/therapeutic/therapeutic_output.h"
#include "useless_superpowers/useless_superpowers.h"

/* Хто в курсі, як вивести help text з екзистенційної кризи? */
static void facilitate_authentic_help_discovery(const char *prog)
{
    printf("\n");
    printf("  HIGH-PERFORMANCE BRUTE FORCE THERAPY (tm)\n");
    printf("  ==========================================\n");
    printf("\n");
    printf("  Використання: %s [ОПЦІЇ]\n", prog);
    printf("\n");
    printf("  Опції:\n");
    printf("    --spokiy       Перебрати ВСІ комбінації спокою\n");
    printf("    --clients      Перебрати ВСІ клієнтські кейси\n");
    printf("    --diagnosis    Перебрати ВСІ діагнози (C(n,k), увага: багато)\n");
    printf("    --guru         Вивести ВСЮ гуру-мудрість\n");
    printf("    --all          ВСЕ РАЗОМ (для тих хто готовий)\n");
    printf("    --no-mood      Пропустити перевірку емоційної готовності\n");
    printf("    --no-streak    Не відстежувати streak\n");
    printf("    --html         Згенерувати HTML (рожевий, з 90-х)\n");
    printf("    --superpowers  Активувати USELESS SUPERPOWERS\n");
    printf("    --help         Цей текст\n");
    printf("\n");
    printf("  Приклад:\n");
    printf("    %s --all\n", prog);
    printf("    %s --spokiy --no-mood\n", prog);
    printf("    %s --html > wisdom.html\n", prog);
    printf("\n");
    printf("  Я не для всіх генераторів. І це моя сила.\n");
    printf("\n");
}

/* Генерує повний HTML з рожевим інтерфейсом 90-х */
static void generate_full_html_therapeutic_experience(
    BruteForceExistentialState *state)
{
    /*
     * Це не HTML.
     * Це терапевтичний портал у стилі 1997 року.
     * Бо справжня мудрість не потребує CSS Grid.
     */
    printf("<!DOCTYPE html>\n");
    printf("<html>\n");
    printf("<head>\n");
    printf("<meta charset=\"utf-8\">\n");
    printf("<title>BRUTE FORCE МУДРІСТЬ — High-Performance Coding Therapy (tm)</title>\n");
    printf("<style>\n");

    /* CSS як біль: яскраво-рожевий, Comic Sans, всі гріхи 90-х */
    printf("body {\n");
    printf("  background: #FF69B4;\n");
    printf("  color: #FFD700;\n");
    printf("  font-family: 'Comic Sans MS', 'Papyrus', cursive, fantasy;\n");
    printf("  text-align: center;\n");
    printf("  margin: 0;\n");
    printf("  padding: 20px;\n");
    printf("}\n");
    printf("h1 {\n");
    printf("  font-size: 48px;\n");
    printf("  color: #FFFF00;\n");
    printf("  text-shadow: 3px 3px #FF0000, -1px -1px #0000FF;\n");
    printf("  animation: blink 0.8s infinite;\n");
    printf("}\n");
    printf("@keyframes blink {\n");
    printf("  0%%, 100%% { opacity: 1; }\n");
    printf("  50%% { opacity: 0.3; }\n");
    printf("}\n");
    printf("@keyframes rainbow {\n");
    printf("  0%% { color: #FF0000; }\n");
    printf("  16%% { color: #FF8800; }\n");
    printf("  33%% { color: #FFFF00; }\n");
    printf("  50%% { color: #00FF00; }\n");
    printf("  66%% { color: #0088FF; }\n");
    printf("  83%% { color: #FF00FF; }\n");
    printf("  100%% { color: #FF0000; }\n");
    printf("}\n");
    printf("@keyframes spin {\n");
    printf("  from { transform: rotate(0deg); }\n");
    printf("  to { transform: rotate(360deg); }\n");
    printf("}\n");
    printf("@keyframes marquee {\n");
    printf("  0%% { transform: translateX(100%%); }\n");
    printf("  100%% { transform: translateX(-100%%); }\n");
    printf("}\n");
    printf(".marquee {\n");
    printf("  overflow: hidden;\n");
    printf("  background: #800080;\n");
    printf("  padding: 10px;\n");
    printf("  border: 4px dashed #FFFF00;\n");
    printf("}\n");
    printf(".marquee-content {\n");
    printf("  display: inline-block;\n");
    printf("  animation: marquee 15s linear infinite;\n");
    printf("  white-space: nowrap;\n");
    printf("  font-size: 24px;\n");
    printf("  color: #00FF00;\n");
    printf("}\n");
    printf(".counter {\n");
    printf("  background: #000000;\n");
    printf("  color: #00FF00;\n");
    printf("  font-family: 'Courier New', monospace;\n");
    printf("  font-size: 20px;\n");
    printf("  padding: 10px 20px;\n");
    printf("  border: 3px ridge #C0C0C0;\n");
    printf("  display: inline-block;\n");
    printf("  margin: 10px;\n");
    printf("}\n");
    printf(".wisdom-card {\n");
    printf("  background: #FF1493;\n");
    printf("  border: 5px outset #FFD700;\n");
    printf("  margin: 15px auto;\n");
    printf("  padding: 20px;\n");
    printf("  max-width: 600px;\n");
    printf("  font-size: 18px;\n");
    printf("  color: #FFFFFF;\n");
    printf("  text-shadow: 2px 2px #000000;\n");
    printf("  text-align: left;\n");
    printf("}\n");
    printf(".section-header {\n");
    printf("  font-size: 32px;\n");
    printf("  color: #00FFFF;\n");
    printf("  text-shadow: 2px 2px #FF0000;\n");
    printf("  margin: 30px 0 10px 0;\n");
    printf("  animation: rainbow 3s infinite;\n");
    printf("}\n");
    printf(".gif-placeholder {\n");
    printf("  font-size: 60px;\n");
    printf("  display: inline-block;\n");
    printf("  animation: spin 2s linear infinite;\n");
    printf("  margin: 5px;\n");
    printf("}\n");
    printf(".guestbook {\n");
    printf("  background: #4B0082;\n");
    printf("  border: 4px inset #FFD700;\n");
    printf("  padding: 20px;\n");
    printf("  margin: 20px auto;\n");
    printf("  max-width: 500px;\n");
    printf("  color: #FF69B4;\n");
    printf("}\n");
    printf(".guestbook input, .guestbook textarea {\n");
    printf("  font-family: 'Comic Sans MS', cursive;\n");
    printf("  background: #FF69B4;\n");
    printf("  color: #000000;\n");
    printf("  border: 3px inset #C0C0C0;\n");
    printf("  padding: 5px;\n");
    printf("  margin: 5px;\n");
    printf("  width: 80%%;\n");
    printf("}\n");
    printf(".guestbook button {\n");
    printf("  font-family: 'Comic Sans MS', cursive;\n");
    printf("  background: #FFD700;\n");
    printf("  color: #FF0000;\n");
    printf("  border: 3px outset #C0C0C0;\n");
    printf("  padding: 10px 30px;\n");
    printf("  font-size: 18px;\n");
    printf("  font-weight: bold;\n");
    printf("  cursor: pointer;\n");
    printf("}\n");
    printf("hr {\n");
    printf("  border: none;\n");
    printf("  height: 4px;\n");
    printf("  background: linear-gradient(to right, #FF0000, #FF8800, #FFFF00, #00FF00, #0088FF, #FF00FF);\n");
    printf("  margin: 20px 0;\n");
    printf("}\n");
    printf("table {\n");
    printf("  margin: 10px auto;\n");
    printf("  border-collapse: collapse;\n");
    printf("}\n");
    printf("td {\n");
    printf("  border: 2px solid #FFD700;\n");
    printf("  padding: 8px 15px;\n");
    printf("  background: #8B008B;\n");
    printf("  color: #00FF00;\n");
    printf("  font-size: 16px;\n");
    printf("}\n");
    printf("a { color: #00FF00; }\n");
    printf("a:visited { color: #FF00FF; }\n");
    printf("a:hover { color: #FFFF00; font-size: 24px; }\n");
    printf("</style>\n");
    printf("</head>\n");
    printf("<body>\n");

    /* Marquee — душа 90-х */
    printf("<div class=\"marquee\">\n");
    printf("  <span class=\"marquee-content\">\n");
    printf("    *** HIGH-PERFORMANCE BRUTE FORCE CODING THERAPY (tm) ***\n");
    printf("    *** Я НЕ ДЛЯ ВСІХ РЕПОЗИТОРІЇВ. І ЦЕ МОЯ СИЛА. ***\n");
    printf("    *** КЛІЄНТ. ЗРОЗУМІЛО. ***\n");
    printf("  </span>\n");
    printf("</div>\n\n");

    /* Spinners */
    printf("<div>\n");
    printf("  <span class=\"gif-placeholder\">&#x1F52E;</span>\n");
    printf("  <span class=\"gif-placeholder\">&#x1F4AB;</span>\n");
    printf("  <span class=\"gif-placeholder\">&#x2728;</span>\n");
    printf("</div>\n\n");

    printf("<h1>BRUTE FORCE МУДРІСТЬ</h1>\n");
    printf("<h2 style=\"color: #FF00FF;\">Наталі Богацької</h2>\n\n");

    printf("<hr>\n\n");

    /* Counter */
    printf("<div class=\"counter\">\n");
    printf("  Ви відвідувач номер: %ld<br>\n", (long)time(NULL) % 99999 + 10000);
    printf("  Цей сайт переглянули 99.9%% успішних підприємців.<br>\n");
    printf("  І самі того не усвідомлюють.\n");
    printf("</div>\n\n");

    printf("<hr>\n\n");

    /* ===== СЕКЦІЯ СПОКОЮ ===== */
    printf("<div class=\"section-header\">&#x1F54A; СПОКІЙ: ПОВНИЙ ПЕРЕБІР</div>\n\n");

    int spokiy_count = 0;
    for (int i = 0; i < (int)SPOKIY_NOT_COUNT; i++) {
        for (int j = 0; j < (int)SPOKIY_YES_COUNT; j++) {
            spokiy_count++;
            printf("<div class=\"wisdom-card\">\n");
            printf("  <b>#%d</b><br>\n", spokiy_count);
            printf("  Спокій — це не %s.<br>\n", SPOKIY_NOT[i]);
            printf("  Спокій — це %s.\n", SPOKIY_YES[j]);
            printf("</div>\n\n");
        }
    }
    state->spokiy_generated = spokiy_count;

    printf("<hr>\n\n");

    /* ===== СЕКЦІЯ КЛІЄНТІВ ===== */
    printf("<div class=\"section-header\">&#x1F4AC; КЛІЄНТСЬКІ КЕЙСИ</div>\n\n");

    int client_count = 0;
    for (int i = 0; i < (int)CLIENT_STORIES_COUNT; i++) {
        for (int j = 0; j < (int)CLIENT_QUOTES_COUNT; j++) {
            client_count++;
            printf("<div class=\"wisdom-card\">\n");
            printf("  <b>#%d</b><br>\n", client_count);
            printf("  %s<br>\n", CLIENT_STORIES[i]);
            printf("  <i>\"%s\"</i><br><br>\n", CLIENT_QUOTES[j]);
            printf("  <b>Клієнт. Зрозуміло.</b>\n");
            printf("</div>\n\n");
        }
    }
    state->client_generated = client_count;

    printf("<hr>\n\n");

    /* ===== СЕКЦІЯ ГУРУ ===== */
    printf("<div class=\"section-header\">&#x1F451; ГУРУ-МУДРІСТЬ</div>\n\n");

    int guru_count = 0;
    for (int i = 0; i < (int)GURU_PHRASES_COUNT; i++) {
        guru_count++;
        printf("<div class=\"wisdom-card\">\n");
        printf("  <b>#%d</b> %s\n", guru_count, GURU_PHRASES[i]);
        printf("</div>\n\n");
    }
    for (int i = 0; i < (int)THERAPEUTIC_ERRORS_COUNT; i++) {
        guru_count++;
        printf("<div class=\"wisdom-card\">\n");
        printf("  <b>#%d</b> %s\n", guru_count, THERAPEUTIC_ERRORS[i]);
        printf("</div>\n\n");
    }
    state->guru_generated = guru_count;

    printf("<hr>\n\n");

    /* Статистика */
    int total = spokiy_count + client_count + guru_count;
    state->total_wisdom_units = total;

    printf("<div class=\"section-header\">&#x1F4CA; СТАТИСТИКА</div>\n\n");
    printf("<table>\n");
    printf("<tr><td>Спокій-комбінацій</td><td>%d</td></tr>\n", spokiy_count);
    printf("<tr><td>Клієнтських кейсів</td><td>%d</td></tr>\n", client_count);
    printf("<tr><td>Гуру-фраз</td><td>%d</td></tr>\n", guru_count);
    printf("<tr><td><b>ВСЬОГО МУДРОСТІ</b></td><td><b>%d</b></td></tr>\n", total);
    printf("</table>\n\n");

    printf("<hr>\n\n");

    /* Гостьова книга — бо 90-ті */
    printf("<div class=\"guestbook\">\n");
    printf("  <h2 style=\"color: #FFD700;\">&#x1F4DD; ГОСТЬОВА КНИГА</h2>\n");
    printf("  <p>Залиште свій відгук! (нікуди не зберігається, як і ваші емоції)</p>\n");
    printf("  <form onsubmit=\"alert('Клієнт. Зрозуміло.'); return false;\">\n");
    printf("    <input type=\"text\" placeholder=\"Ваше ім'я (або нікнейм з IRC)\"><br>\n");
    printf("    <textarea rows=\"3\" placeholder=\"Ваш відгук...\"></textarea><br>\n");
    printf("    <button type=\"submit\">ВІДПРАВИТИ В КОСМОС</button>\n");
    printf("  </form>\n");
    printf("</div>\n\n");

    printf("<hr>\n\n");

    /* Підвал */
    printf("<div style=\"font-size: 14px; color: #C0C0C0;\">\n");
    printf("  <p>Зроблено на C з любов'ю та екзистенційним розчарованням</p>\n");
    printf("  <p>Best viewed in Netscape Navigator 4.0 at 800x600</p>\n");
    printf("  <p>Диплома, сертифіката, ліцензії не маємо. Але gcc дали.</p>\n");
    printf("  <span class=\"gif-placeholder\">&#x1F52E;</span>\n");
    printf("  <span class=\"gif-placeholder\">&#x1F308;</span>\n");
    printf("  <span class=\"gif-placeholder\">&#x1F52E;</span>\n");
    printf("  <p><br>&#169; 1997-2026 High-Performance Coding Therapy (tm)</p>\n");
    printf("  <p>Клієнт. Зрозуміло.</p>\n");
    printf("</div>\n\n");

    printf("<script>\n");
    printf("document.title = document.title + ' | ' + %d + ' одиниць мудрості';\n", total);
    printf("setInterval(function() {\n");
    printf("  document.body.style.background = \n");
    printf("    ['#FF69B4','#FF1493','#FF00FF','#8B008B','#FF69B4']\n");
    printf("    [Math.floor(Math.random()*5)];\n");
    printf("}, 3000);\n");
    printf("// Cursor trail — бо 90-ті без нього не 90-ті\n");
    printf("document.addEventListener('mousemove', function(e) {\n");
    printf("  var s = document.createElement('span');\n");
    printf("  s.textContent = ['\\u2728','\\u1F52E','\\u2B50','\\u1F4AB'][Math.floor(Math.random()*4)];\n");
    printf("  s.style.cssText = 'position:fixed;left:'+e.clientX+'px;top:'+e.clientY+'px;pointer-events:none;font-size:20px;z-index:9999;transition:all 1s;';\n");
    printf("  document.body.appendChild(s);\n");
    printf("  setTimeout(function(){s.style.opacity='0';s.style.transform='translateY(-50px)';},10);\n");
    printf("  setTimeout(function(){s.remove();},1000);\n");
    printf("});\n");
    printf("</script>\n");

    printf("</body>\n");
    printf("</html>\n");
}

int main(int argc, char **argv)
{
    /*
     * Це не main.
     * Це точка входу в терапевтичний простір.
     * Кожен аргумент — це вибір.
     * Кожен вибір — це відповідальність.
     *
     * 99.9% програм починаються з main.
     * І самі того не усвідомлюють.
     */

    int do_spokiy = 0, do_clients = 0, do_diagnosis = 0, do_guru = 0;
    int do_html = 0, skip_mood = 0, skip_streak = 0, do_superpowers = 0;
    int show_help = 0;

    /* Парсимо аргументи. Вручну. Бо getopt — це залежність від системи. */
    /* А ми не залежимо. Ми самодостатні. */
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--spokiy") == 0) do_spokiy = 1;
        else if (strcmp(argv[i], "--clients") == 0) do_clients = 1;
        else if (strcmp(argv[i], "--diagnosis") == 0) do_diagnosis = 1;
        else if (strcmp(argv[i], "--guru") == 0) do_guru = 1;
        else if (strcmp(argv[i], "--all") == 0) {
            do_spokiy = do_clients = do_diagnosis = do_guru = 1;
        }
        else if (strcmp(argv[i], "--html") == 0) do_html = 1;
        else if (strcmp(argv[i], "--superpowers") == 0) do_superpowers = 1;
        else if (strcmp(argv[i], "--no-mood") == 0) skip_mood = 1;
        else if (strcmp(argv[i], "--no-streak") == 0) skip_streak = 1;
        else if (strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0)
            show_help = 1;
        else {
            fprintf(stderr, "  Це не невідомий аргумент '%s'.\n", argv[i]);
            fprintf(stderr, "  Це криза ідентичності у парсері.\n\n");
            show_help = 1;
        }
    }

    if (show_help || argc < 2) {
        facilitate_authentic_help_discovery(argv[0]);
        return 0;
    }

    /* Ініціалізуємо стан */
    BruteForceExistentialState state;
    initiate_deep_inner_combinatorial_awakening(&state);

    /* Непрошена перевірка емоційної готовності */
    if (!skip_mood && !do_html) {
        EmotionalReadinessLevel readiness = EMOTIONAL_STATE_NOT_READY;
        if (!skip_mood) {
            readiness = validate_emotional_readiness();
            PreBruteForceEmotionalState mood = inquire_about_emotional_state();
            const char *adaptation = adapt_output_to_emotional_reality(mood);
            printf("\n  [MOOD] %s\n", adaptation);
            printf("  [EMOTIONAL READINESS] %s\n\n",
                   get_motivational_quote_for_state(readiness));
        }
    }

    /* Непрошений streak tracker */
    if (!skip_streak && !do_html) {
        int streak = load_streak_from_file();
        streak++;
        save_streak_to_file(streak);
        display_streak_celebration(streak);
        state.consecutive_runs_without_crying = streak;
    }

    /* HTML режим */
    if (do_html) {
        generate_full_html_therapeutic_experience(&state);
        return 0;
    }

    /* Консольний режим */
    printf("\n");
    printf("  ================================================\n");
    printf("  = HIGH-PERFORMANCE BRUTE FORCE THERAPY (tm)     =\n");
    printf("  = Це не генератор. Це тотальна трансформація.   =\n");
    printf("  ================================================\n");

    if (do_spokiy) {
        print_section_header(stdout,
            "СПОКІЙ: ПОВНИЙ ПЕРЕБІР",
            "Кожна комбінація заслуговує бути почутою.");
        bruteforce_all_spokiy_permutations(&state, stdout);
    }

    if (do_clients) {
        print_section_header(stdout,
            "КЛІЄНТСЬКІ КЕЙСИ: ПОВНИЙ ПЕРЕБІР",
            "Конфіденційність? Ні, не чув.");
        bruteforce_all_client_story_permutations(&state, stdout);
    }

    if (do_diagnosis) {
        print_section_header(stdout,
            "ДІАГНОЗИ: КОМБІНАТОРНИЙ ВИБУХ",
            "C(n,k) по кожному інтро. Це нормально.");
        bruteforce_all_diagnosis_permutations(&state, stdout);
    }

    if (do_guru) {
        print_section_header(stdout,
            "ГУРУ-МУДРІСТЬ ТА ТЕРАПЕВТИЧНІ ПОМИЛКИ",
            "Якщо тобі шкода stdout — тобі не до мене.");
        output_all_guru_wisdom(&state, stdout);
    }

    if (do_superpowers) {
        /* Ніхто не просив. Але всі потребували. */
        align_chakras_with_compiler_flags();
        defragment_emotional_heap();
        unleash_all_useless_superpowers();
    }

    /* Порожні методи які нічого не роблять але дуже важливі */
    process_inner_conflict(&state);
    initiate_existential_recalibration(&state);

    /* Фінальна статистика */
    print_wisdom_statistics(stdout,
        state.spokiy_generated,
        state.client_generated,
        state.diagnosis_generated,
        state.guru_generated);

    /*
     * Це не exit code.
     * Це прощання з усвідомленням.
     * Клієнт. Зрозуміло.
     */
    return 0;
}
