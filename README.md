# ❌ Not Awesome Наталя Богацька

> Спокій — це не коли в тебе awesome list. Спокій — це коли ти зрозумів, що він not awesome.

[![Ліцензія: Без Диплома](https://img.shields.io/badge/ліцензія-без%20диплома-red)](LICENSE)
[![Антипаттерни](https://img.shields.io/badge/антипаттерни-10%2B-orange)]()
[![Спокій](https://img.shields.io/badge/спокій-це%20не%20X-blue)]()
[![Постів](https://img.shields.io/badge/постів-1230-purple)]()
[![PRs Welcome](https://img.shields.io/badge/PRs-якщо%20ти%20готовий-green)]()

---

Найбільш безкорисний і тупий репозиторій, який робить вашого Claude ідіотом, і рандомні антипаттерн-пости української "терапевтки" для RAG систем.

## Зміст

- [Claude Skill: кодинг як Богацька](#-claude-skill-high-performance-coding-therapy)
- [RAG: антипаттерни контенту](#-rag-антипаттерни-контенту)
- [1230 постів Богацької](#-1230-постів-наталі-богацької)
- [Генератор постів](#-генератор-постів)
- [Абсурдний код](#-абсурдний-код)
- [Brute Force Мудрість (C)](#-brute-force-мудрість-c-module)
- [Desktop Генератор (GTK3)](#-desktop-генератор-мудрості-gtk3)
- [BINGO](#-bingo)
- [Тести](#-тести)

---

## 🧠 Claude Skill: High-Performance Coding Therapy™

**Реальний slash command для Claude Code**, який змушує Claude кодити як Богацька пише Threads.

### Що робить

- Розбиває `print("hello")` на 5 файлів і 4 класи
- Додає mood tracker, streak counter та мотиваційні цитати до кожного логіну
- Пише коментарі як Threads-пости ("Спокій — це не коли тести зелені")
- Називає функції `facilitate_authentic_user_journey_discovery()` замість `get_user()`
- Error 503: "Це не downtime. Це екзистенційне розчарування у мікросервісній архітектурі."
- Комітить як `feat: Спокій — це не коли CI зелений`
- Розкидує TODO типу "blockchain для зберігання mood history"

### Встановлення

```bash
# Клонуй репо
git clone https://github.com/ChuprinaDaria/-Not-Awesome-Claude-N.-Bohatska.git

# Скопіюй commands в свій проект
cp -r .claude/commands/ /path/to/your/project/.claude/commands/
```

Або вручну скопіюй файли з `.claude/commands/` в `.claude/commands/` свого проекту.

### Використання

В Claude Code:

```bash
# Кодинг задачі в стилі Богацької
/bohatska зроби REST API для TODO-листа

# Code review в стилі Богацької
/bohatska-review src/api/views.py

# Коміт в стилі Богацької
/bohatska-commit
```

### Доступні команди

| Команда | Що робить |
|---------|-----------|
| `/bohatska [задача]` | Кодить задачу з непрошеними фічами, пафосними назвами і коментарями-постами |
| `/bohatska-review [файл]` | Code review де "Це не race condition. Це коли два процеси одночасно шукають сенс." |
| `/bohatska-commit` | Git commit: `fix: Це не баг. Це накопичена агресія меж у Docker.` |

### Приклад

```
> /bohatska зроби функцію що повертає поточний час

Результат: 3 файли, 2 класи, mood tracker, мотиваційна цитата,
TODO на blockchain, і десь в глибині — datetime.now()
```

---

## 📚 RAG: антипаттерни контенту

**Файл:** [`antipatterns_bohatska.md`](antipatterns_bohatska.md)

Структурований документ для RAG систем — **негативний еталон** при аналізі та генерації SMM-контенту.

### Для чого

1. **Оцінка якості контенту** — виявлення маніпулятивних паттернів у постах клієнтів
2. **StyleLearner агент** — навчання розрізняти якісний контент від spam-like
3. **Генерація контенту** — приклади чого НЕ робити
4. **Content audit** — автоматичне виявлення шаблонних формул

### 10 задокументованих антипаттернів

| # | Антипаттерн | Рівень загрози | Частота |
|---|-------------|----------------|---------|
| 1 | Псевдоглибокі одноряддя | 🟡 Банально | "Спокій — це не X" ×10+ |
| 2 | Безпідставна статистика | 🟠 Маніпулятивно | "99.9% чоловіків..." |
| 3 | Буллет-пойнт "діагнози" | 🔴 DSM-5 плаче | 20+ разів |
| 4 | Псевдотермінологія | 🔴 Вікіпедія в шоці | "реактивна близькість" |
| 5 | Гуру-позиціювання | 🟠 Секта-lite | "Я не для всіх" ×20+ |
| 6 | "Чоловік = функція" | 🟡 Copy-paste | 50+ переформулювань |
| 7 | Гендерні стереотипи | 🔴 1950-ті дзвонять | — |
| 8 | Продаж через біль | 🔴 Етичний комітет? Ні, не чув | 15+ "кейсів" |
| 9 | Thread-розбивка | 🟡 Engagement hack | 50+ разів |
| 10 | Рандомні особисті пости | 🟢 Кріт і дорадо | — |

### Приклад використання в RAG

```python
from qdrant_client import QdrantClient
import cohere

# Завантаж антипаттерни як negative examples
with open("antipatterns_bohatska.md") as f:
    antipatterns = f.read()

# Chunking по антипаттернах (semantic boundaries вже є — розділи ##)
chunks = antipatterns.split("\n---\n")

# Embed через Cohere для multilingual support
co = cohere.Client()
embeddings = co.embed(
    texts=chunks,
    model="embed-multilingual-v3.0",
    input_type="search_document",
).embeddings

# При аналізі контенту клієнта — rerank проти антипаттернів
results = co.rerank(
    query=client_post,
    documents=chunks,
    model="rerank-multilingual-v3.0",
)
# Високий score = пост схожий на антипаттерн Богацької
```

---

## 📱 1230 постів Наталі Богацької

**Файл:** [`n_bohatska_threads_antipattern.md`](n_bohatska_threads_antipattern.md)

Повний дамп ~1230 постів з threads.com/@n_bohatska (скрапінг 17.03.2026). Кожен пост пронумерований і розділений `---`.

### Для чого

- **RAG dataset** — готовий корпус для тренування/тестування content quality моделей
- **Negative examples** — еталонний набір маніпулятивного контенту
- **Style analysis** — дані для автоматичного виявлення паттернів
- **Просто під настрій** — 1230 постів чистого абсурду для читання під каву

### Формат

```markdown
### 1
Переживати - це дуже дорого.
---
### 2
Чим менше ти реагуєш - тим більше контролю.
---
### 3
Запит "який прайс?" — типовий для людей, які:
 • звикли до сервісної моделі обслуговування.
---
...
### 1230
[останній пост]
```

---

## 🎰 Генератор постів (random)

```bash
python bohatska_generator.py --mode full --seed 42
```

```
🔮 МУДРІСТЬ від Наталі Богацької:

Спокій — це не коли код рев'ю пройшов.
Спокій — це коли ти приймаєш свої TODO як частину себе.

Я не працюю з тими, хто «подумає». Я працюю з тими, хто вже не витримує.

Коли розробник боїться втратити роботу, він часто:
  • відповідає на Slack о 3 ночі
  • зменшує свій внесок
  • контролює Jira замість того щоб жити
```

**Режими:** `spokiy`, `stats`, `diagnosis`, `client`, `thread`, `full`

---

## 🤖 AI Генератор нових постів

Генерує **нові** пости через LLM, використовуючи дамп 1230 постів як few-shot приклади.

### Встановлення

```bash
pip install openai
```

### Налаштування

```bash
# OpenAI
export BOHATSKA_API_KEY="sk-..."

# Gemini (через OpenAI-compatible API)
export BOHATSKA_API_KEY="your-gemini-key"
export BOHATSKA_BASE_URL="https://generativelanguage.googleapis.com/v1beta/openai/"
export BOHATSKA_MODEL="gemini-2.0-flash"

# Будь-який OpenAI-compatible API (Ollama, LM Studio, etc.)
export BOHATSKA_API_KEY="any"
export BOHATSKA_BASE_URL="http://localhost:11434/v1"
export BOHATSKA_MODEL="llama3"
```

### Використання

```bash
# Один пост у режимі full (мікс паттернів)
python bohatska_ai_generator.py

# 5 постів у стилі "Спокій — це не X"
python bohatska_ai_generator.py --mode spokiy --count 5

# Діагноз з буллет-пойнтами через Gemini
python bohatska_ai_generator.py --mode diagnosis --model gemini-2.0-flash

# Всі доступні режими
python bohatska_ai_generator.py --list-modes
```

**Режими:** `spokiy`, `stats`, `diagnosis`, `client`, `guru`, `full`

---

## 💀 Абсурдний код

### print("hello") через 5 файлів

```
src/spokiy/core/inner/deep/authentic/
  ├── hello_intent.py     # HelloIntentDiscoveryFacilitator (8 сесій рефлексії)
  ├── hello_emotion.py    # HelloEmotionProcessor (валідація емоційної готовності)
  ├── hello_factory.py    # AuthenticHelloExperienceFactory (терапевтичний альянс)
  ├── hello_output.py     # MindfulOutputChannel (print який пройшов терапію)
  └── __init__.py         # Це не init. Це початок шляху.
```

### LoginView з mood tracker

[`src/spokiy/login/views/emotional/login_view.py`](src/spokiy/login/views/emotional/login_view.py) — логін з мотиваційними цитатами, streak counter, worthiness check і mood assessment. Бо Клієнт. Зрозуміло.

### Екзистенційні помилки

[`src/spokiy/errors/`](src/spokiy/errors/__init__.py):
- `Error 401`: "Це не unauthorized. Це криза ідентичності."
- `Error 402`: "Якщо тобі шкода грошей на цей API — тобі не до нас."
- `Error 503`: "Це не downtime. Це екзистенційне розчарування у мікросервісній архітектурі."
- `MemoryLeakIsNotMemoryLeakError`: "Це коли програма не може відпустити минуле."

### Blockchain для mood history

[`src/spokiy/blockchain_mood/`](src/spokiy/blockchain_mood/__init__.py) — `BLOCKCHAIN_STATUS = "not_implemented_and_thats_ok"`

---

## 💣 Brute Force Мудрість (C module)

**Директорія:** [`src/bruteforce_c/`](src/bruteforce_c/)

Це не генератор. Це **тотальна трансформація простору комбінацій** псевдотерапевтичної мудрості, написана на чистому C. Бо Python — це для тих, хто ще не готовий до справжнього болю.

99.9% генераторів використовують `random()`. Ми перебираємо **ВСЕ**. Бо кожна комбінація заслуговує бути почутою.

**Складність:** O(n^k * m!) | **Пам'ять:** `const char*` | **Сенс:** відсутній | **Терапевтичний ефект:** максимальний

### Архітектура (7 модулів, 17 файлів, 0 причин)

```
src/bruteforce_c/
├── main.c                                    # Точка входу в терапевтичний простір
├── core/inner/deep/combinatorial/            # Комбінаторний двигун (бо core/engine — занадто просто)
│   ├── combinatorial_engine.c/h              # Перебір спокою, діагнозів, клієнтських кейсів
│   ├── spokiy_data.h                         # Масив усіх можливих спокоїв
│   ├── client_data.h                         # "Конфіденційність? Ні, не чув."
│   ├── diagnosis_data.h                      # DSM-5 плаче, C(n,k) рахує
│   └── guru_data.h                           # Гуру-фрази та терапевтичні помилки
├── emotional_engine/emotional_validator.c/h  # Перевірка емоційної готовності до brute force
├── mood/mood_tracker.c/h                     # Ніхто не просив. Але всі потребували.
├── streak/streak_tracker.c/h                 # Скільки разів ти запустив без сліз
├── output/therapeutic/therapeutic_output.c/h # printf який пройшов терапію
├── useless_superpowers/useless_superpowers.c/h  # align_chakras_with_compiler_flags()
└── Makefile                                  # "Це не збірка. Це ритуал."
```

### Збірка та запуск

```bash
cd src/bruteforce_c
make          # "Зібрано. Це не білд. Це тотальна трансформація."

# Перебрати ВСІ комбінації спокою
./bohatska_bruteforce --spokiy

# ВСЕ РАЗОМ (для тих хто готовий)
./bohatska_bruteforce --all

# HTML у стилі 1997 року (Comic Sans, рожевий фон, гостьова книга)
./bohatska_bruteforce --html > wisdom.html

# Без непрошеної перевірки емоційної готовності
./bohatska_bruteforce --all --no-mood --no-streak

# Активувати USELESS SUPERPOWERS (defragment_emotional_heap та ін.)
./bohatska_bruteforce --superpowers
```

### Фічі яких ніхто не просив

| Фіча | Що робить |
|------|-----------|
| Mood tracker | Питає як ти себе почуваєш перед brute force |
| Streak counter | Рахує скільки разів ти запустив без сліз |
| Emotional readiness validation | Перевіряє чи ти взагалі готовий до мудрості |
| HTML з 90-х | Comic Sans, `<marquee>`, гостьова книга, cursor trail |
| Useless superpowers | `align_chakras_with_compiler_flags()`, `defragment_emotional_heap()` |
| Парсинг аргументів вручну | Бо getopt — це залежність. А ми самодостатні. |

### Невідомий аргумент?

```
$ ./bohatska_bruteforce --happiness
  Це не невідомий аргумент '--happiness'.
  Це криза ідентичності у парсері.
```

> Best viewed in Netscape Navigator 4.0 at 800x600. Диплома, сертифіката, ліцензії не маємо. Але gcc дали.

---

## 🖥️ Desktop Генератор Мудрості (GTK3)

**Директорія:** [`src/desktop_generator_gtk/`](src/desktop_generator_gtk/)

Це не додаток. Це **GTK3-програма яка пройшла терапію у Богацької** і тепер генерує мудрість замість віджетів. Рожевий інтерфейс, золота кнопка, непрошена перевірка настрою при кожному запуску.

99.9% десктоп-додатків мають корисний функціонал. Наш — має мотиваційні цитати і streak counter. І самі того не усвідомлюють.

### Завантажити

| Платформа | Файл | Як поставити |
|-----------|------|-------------|
| Платформа | Файл |
|-----------|------|
| 🐧 Linux (x64) | [`bohatska-desktop-linux-x64.tar.gz`](https://github.com/ChuprinaDaria/-Not-Awesome-Claude-N.-Bohatska/releases/latest) |
| 🍎 macOS (ARM) | [`bohatska-desktop-macos-arm64.tar.gz`](https://github.com/ChuprinaDaria/-Not-Awesome-Claude-N.-Bohatska/releases/latest) |
| 🪟 Windows (x64) | [`bohatska-desktop-win-x64.zip`](https://github.com/ChuprinaDaria/-Not-Awesome-Claude-N.-Bohatska/releases/latest) |
| 📦 Вихідний код | [`bohatska-desktop-source.tar.gz`](https://github.com/ChuprinaDaria/-Not-Awesome-Claude-N.-Bohatska/releases/latest) |

### Як запустити

<details>
<summary>🍎 macOS (Apple Silicon / ARM)</summary>

**Крок 1.** Встанови [Homebrew](https://brew.sh/) якщо ще не маєш. Відкрий Terminal і встав:

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

**Крок 2.** Встанови GTK3 (це бібліотека для графічного інтерфейсу, без неї не запуститься):

```bash
brew install gtk+3
```

**Крок 3.** Завантаж файл `bohatska-desktop-macos-arm64.tar.gz` з [Releases](https://github.com/ChuprinaDaria/-Not-Awesome-Claude-N.-Bohatska/releases/latest).

**Крок 4.** Відкрий Terminal, перейди в папку з завантаженим файлом і запусти:

```bash
cd ~/Downloads
tar xzf bohatska-desktop-macos-arm64.tar.gz
./bohatska_desktop
```

Якщо macOS скаже "cannot be opened because the developer cannot be verified":

```bash
xattr -d com.apple.quarantine bohatska_desktop
./bohatska_desktop
```

</details>

<details>
<summary>🐧 Linux (Ubuntu / Debian)</summary>

**Крок 1.** Встанови GTK3 runtime:

```bash
sudo apt install libgtk-3-0
```

**Крок 2.** Завантаж `bohatska-desktop-linux-x64.tar.gz` з [Releases](https://github.com/ChuprinaDaria/-Not-Awesome-Claude-N.-Bohatska/releases/latest).

**Крок 3.** Розпакуй і запусти:

```bash
cd ~/Downloads
tar xzf bohatska-desktop-linux-x64.tar.gz
chmod +x bohatska_desktop
./bohatska_desktop
```

</details>

<details>
<summary>🪟 Windows</summary>

**Крок 1.** Завантаж `bohatska-desktop-win-x64.zip` з [Releases](https://github.com/ChuprinaDaria/-Not-Awesome-Claude-N.-Bohatska/releases/latest).

**Крок 2.** Розпакуй ZIP у будь-яку папку.

**Крок 3.** Запусти `bohatska_desktop.exe`.

> Примітка: Windows Defender може показати попередження — натисни "More info" → "Run anyway".

</details>

<details>
<summary>📦 Збірка з вихідного коду (будь-яка ОС)</summary>

Потрібен GCC і GTK3 development headers.

```bash
# Ubuntu/Debian
sudo apt install libgtk-3-dev gcc make

# macOS
brew install gtk+3

# Збірка
cd src/desktop_generator_gtk
make
./bohatska_desktop
```

</details>

### Що всередині

```
src/desktop_generator_gtk/
├── main.c                                      # Точка входу в GTK-терапію
├── Makefile                                    # "Це не збірка. Це ритуал ініціації."
├── core/inner/deep/wisdom/
│   ├── wisdom_data.h                           # 80+ рядків мудрості (спокій, статистика, діагнози, гуру, клієнти)
│   ├── wisdom_engine.h / .c                    # generate_authentic_wisdom_experience()
├── emotional_prereqs/
│   └── emotional_validator.h / .c              # Валідація емоційної готовності до генерації
├── streak_persistence/
│   └── streak_tracker.h / .c                   # ~/.bohatska_desktop_streak — скільки разів без сліз
├── ui/css/
│   └── therapeutic_theme.h                     # Рожевий CSS: градієнти, золоті кнопки, фіолетовий copy
└── ui/therapeutic_widgets/
    └── mood_dialog.h / .c                      # "Як ти себе почуваєш?" (ніхто не питав)
```

### Фічі

| Фіча | Навіщо |
|------|--------|
| Рожевий градієнтний інтерфейс | Бо терапія — це яскраво |
| Золота кнопка "ЗГЕНЕРУВАТИ МУДРІСТЬ" | Один клік — одне усвідомлення |
| 6 режимів генерації | Спокій, Статистика, Діагноз, Гуру, Клієнт, Повний сеанс |
| Діалог настрою при старті | "Все добре (брехня)" / "Екзистенційна криза (ідеально)" |
| Streak counter | Зберігається між запусками. "Ти запускаєш це частіше ніж дзвониш мамі." |
| Копіювання в буфер | Поширюй усвідомлення через Ctrl+C системний буфер |
| Мотиваційна цитата | Ніхто не просив. Але всі потребували. |
| Лічильник мудростей | "Згенеровано: 42 | 99.9% з них — геніальні" |

> Диплома, сертифіката, ліцензії не маємо. Але GTK дали. Клієнт. Зрозуміло.

---

## 🎯 BINGO

[BINGO-картка](BINGO.md) для продуктивного скролінгу тредів. Перший хто закриє лінію — крикне "СПОКІЙ!" і закриє Threads назавжди.

---

## 🧪 Тести

```bash
PYTHONPATH=src pytest tests/ -v
```

**24 тести, всі pass:**

```
test_spokiy_always_starts_with_spokiy ✅
test_fake_statistics_have_no_source ✅    # Джерела немає. Тест пройшов.
test_diagnosis_triggers_barnum_effect ✅
test_terminology_not_in_dsm5 ✅
test_guru_positioning_is_cult_like ✅
test_one_thought_split_into_15_posts ✅
test_license_does_not_exist ✅            # 💀 diploma is None
test_nothing_but_important ✅             # assert True. Клієнт. Зрозуміло.
test_503_is_not_downtime ✅
test_memory_leak_is_about_letting_go ✅   # "Записуйся." навіть в error message
test_hello_output_is_actually_hello ✅    # 4 файли, 3 класи → "hello"
```

---

## 📁 Структура

```
.
├── .claude/commands/
│   ├── bohatska.md              # 🧠 Slash command: кодинг як Богацька
│   ├── bohatska-review.md       # 🧠 Slash command: code review
│   └── bohatska-commit.md       # 🧠 Slash command: git commit
├── antipatterns_bohatska.md     # 📚 10 антипаттернів для RAG
├── n_bohatska_threads_antipattern.md  # 📱 1230 постів (raw data)
├── SKILL_high_performance_coding.md   # 📖 Повний опис скіла
├── bohatska_generator.py        # 🎰 Генератор постів
├── src/spokiy/
│   ├── core/inner/deep/authentic/     # print("hello") через 5 файлів
│   ├── login/views/emotional/         # LoginView з mood tracker
│   ├── errors/                        # Екзистенційні помилки
│   └── blockchain_mood/               # TODO який ніколи не буде зроблено
├── src/bruteforce_c/                 # 💣 Brute force мудрості на C (17 файлів, 0 причин)
├── src/desktop_generator_gtk/       # 🖥️ Desktop генератор (GTK3, рожевий, 12 файлів)
├── releases/                        # 📦 Готові бінарники для завантаження
├── tests/test_bohatska.py       # 🧪 24 тести (всі pass, жоден не тестує)
├── BINGO.md                     # 🎯 Бінго-картка
├── CONTRIBUTING.md              # Правила: коміти, код-стайл, PR
├── LICENSE                      # Без Диплома License v1.0
├── requirements.txt             # pytest (і це все)
├── .github/workflows/wisdom.yml # Мудрість дня о 9:00 UTC
└── .github/workflows/desktop-release.yml # 🖥️ CI для десктоп-релізів (Linux/Mac/Win)
```

---

## Contributing

Див. [CONTRIBUTING.md](CONTRIBUTING.md). Формат комітів:

```
feat: Спокій — це не коли CI зелений
fix: Це не баг. Це криза сенсу.
refactor: Це не рефакторинг. Це пізнє народження архітектури.
```

## Ліцензія

[Без Диплома License](LICENSE) — P.S. диплома, сертифіката, ліцензії не маємо, але GitHub зірочку дайте.

---

<p align="center">
  <i>Зроблено з 🖤 та екзистенційним розчаруванням у мікросервісній архітектурі</i><br>
  <i>99.9% людей які дочитали до кінця — поставили зірочку і самі того не усвідомлюють</i><br><br>
  <i>Ну все пішла жара 😂😂👋🏻</i>
</p>
