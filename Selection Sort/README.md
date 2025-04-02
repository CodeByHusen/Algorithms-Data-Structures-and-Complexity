# Programm zur Sortierung von Zahlen mit Selection Sort

Dieses Programm liest eine Zeile von der Standardeingabe (stdin), wandelt die eingegebenen Zahlen in ein Array um, sortiert sie mithilfe des Selection-Sort-Algorithmus und gibt das sortierte Array aus.

## Schrittweise Erklärung des Programms:

1. **Eingabe lesen**  
   - `fgets(line, sizeof(line), stdin);` liest eine Zeile mit maximal 255 Zeichen von der Standardeingabe (Tastatur).
   - `strtok(line, " ");` zerlegt diese Zeile anhand von Leerzeichen in einzelne Tokens (Worte).
   - `atoi(token);` wandelt jedes Token in eine Ganzzahl (`int`) um und speichert sie im Array `A`.

2. **Selection Sort implementieren**  
   - Die Funktion `selectionSort(int A[], int n)` sortiert das Array `A` mit dem **Selection-Sort-Algorithmus**.
   - Der Algorithmus findet in jedem Durchlauf das kleinste Element aus dem unsortierten Teil des Arrays und tauscht es an die richtige Position.

3. **Sortiertes Array ausgeben**  
   - Nach der Sortierung wird das Array mit einer `for`-Schleife ausgegeben.

## Beispiel für Eingabe & Ausgabe:

### Eingabe:
7 3 9 1 5

### Zwischenschritte in `selectionSort()`:
- **1. Iteration:** `{1, 3, 9, 7, 5}`
- **2. Iteration:** `{1, 3, 9, 7, 5}` (keine Änderung, da 3 bereits an der richtigen Stelle ist)
- **3. Iteration:** `{1, 3, 5, 7, 9}`
- **4. Iteration:** `{1, 3, 5, 7, 9}` (keine Änderung)

### Ausgabe:
1 3 5 7 9

## Zusätzliche Informationen:
- Das Programm geht davon aus, dass maximal **16 Zahlen** eingegeben werden können (`int A[16]`).
- Falls mehr als 16 Zahlen eingegeben werden, kann es zu **Speicherproblemen (Buffer Overflow)** kommen.
- Es verwendet **Selection Sort**, der eine Laufzeit von \( O(n^2) \) hat, was für große Datensätze ineffizient ist.