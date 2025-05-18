# Alternierende Verknüpfung zweier Listen (C Programm)

Dieses Programm liest zwei Listen von ganzen Zahlen ein, jeweils beendet mit einer `0`, und verbindet diese dann **abwechselnd** zu einer einzigen verketteten Liste.

---

## Funktionsweise

- Es werden zwei Listen `L1` und `L2` vom Benutzer eingelesen.
- Jede Liste wird durch eine Folge von Zahlen (ohne `0`) eingegeben, beendet durch eine `0`.
- Die Funktion `merge_alternate` verbindet die beiden Listen, indem sie abwechselnd Elemente aus `L1` und `L2` nimmt.
- Das Ergebnis wird als eine verkettete Liste ausgegeben.

---

## Beispiel

**Eingabe:**
1 2 3 0
4 5 6 0

**Ausgabe:**
[ 1 4 2 5 3 6 ]


---

## Funktionen im Programm

- `new_List(int key)`: Erzeugt einen neuen Listenknoten.
- `free_List(struct List* p)`: Gibt Speicher frei (derzeit nur einfacher Free, kein rekursives Freigeben).
- `print_List(struct List* L)`: Gibt die Liste in einer Zeile aus.
- `read_list()`: Liest eine Zeile von `stdin` ein und erzeugt daraus eine Liste bis zur `0`.
- `MoveNode(struct List** destRef, struct List** sourceRef)`: Verschiebt den vordersten Knoten von `sourceRef` nach `destRef`.
- `merge(struct List* L1, struct List* L2)`: Verbindet zwei sortierte Listen zu einer sortierten Liste (nicht im aktuellen Ablauf genutzt).
- `merge_alternate(struct List* L1, struct List* L2)`: Verbindet zwei Listen, indem abwechselnd Knoten aus beiden Listen übernommen werden.

---

## Kompilieren und Ausführen

```bash
gcc -o merge_alternate merge_alternate.c
./merge_alternate
