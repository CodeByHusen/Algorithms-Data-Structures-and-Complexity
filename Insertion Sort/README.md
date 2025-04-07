# 🧮 Insertion Sort-Algorithmus

Dieses C-Programm implementiert den **Insertion Sort-Algorithmus**, um eine Liste von Ganzzahlen, die über die Standard-Eingabe eingegeben werden, in **aufsteigender Reihenfolge** zu sortieren.

## 🔧 Funktionsweise

1. **Eingabe einlesen:**
   - Eine Zeile mit Ganzzahlen wird eingelesen (z. B. `10 5 3 8`).
   - Die Zahlen werden mithilfe von `strtok` zerlegt und mit `atoi` in ein Integer-Array gespeichert.

2. **Sortieren mit Insertion Sort:**
   - Der Insertion Sort-Algorithmus sortiert das Array, indem er jedes Element an die richtige Position verschiebt.
   - Dabei wird intern mit einer `swap`-Funktion gearbeitet.

3. **Ausgabe:**
   - Die sortierten Zahlen werden mit Leerzeichen getrennt ausgegeben.

## 💻 Beispiel

**Eingabe:**
```
9 2 5 1 7
```

**Ausgabe:**
```
1 2 5 7 9
```

## ⚙️ Kompilierung und Ausführung

### Mit GCC (Linux/macOS/WSL):
```bash
gcc -o insertion_sort main.c
./insertion_sort
```

### Mit Visual Studio / Windows:
- Öffne das Projekt in Visual Studio.
- Baue das Projekt und führe es aus.
- Gib im Konsolenfenster eine Reihe von Zahlen ein und bestätige mit Enter.

## 📌 Hinweise

- Das Programm unterstützt aktuell bis zu **16 Ganzzahlen**.
- Die Direktive `_CRT_SECURE_NO_WARNINGS` verhindert Warnungen bei Funktionen wie `fgets` und `strtok` unter Visual Studio.
