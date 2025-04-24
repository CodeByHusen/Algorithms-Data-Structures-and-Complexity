# Deque-Kommandozeilenprogramm

Dieses Programm implementiert eine einfache Steuerung einer **Double-Ended Queue (Deque)** über die Kommandozeile. Eine Deque erlaubt das Hinzufügen und Entfernen von Elementen an beiden Enden – am Kopf (Front) und am Ende (Back).

## 📦 Funktionen

Das Programm liest Eingaben von `stdin` (also z. B. aus der Konsole oder einer Datei) und unterstützt folgende Operationen:

- `push_front <Zahl>` – Fügt die Zahl am Anfang der Deque hinzu.
- `push_back <Zahl>` – Fügt die Zahl am Ende der Deque hinzu.
- `pop_front` – Entfernt das erste Element und gibt es aus.
- `pop_back` – Entfernt das letzte Element und gibt es aus.
- `end` – Beendet das Programm.

## 🛠 Verwendete Bibliotheken

- `<stdio.h>`: Für Ein- und Ausgabe
- `<stdlib.h>`: Für Funktionen wie `atoi()`
- `<string.h>`: Für String-Manipulation
- `<ctype.h>`: (wird in dieser Version nicht aktiv verwendet)
- `<deque>`: C++ STL-Klasse für die Deque-Datenstruktur

## ▶️ Beispiel

```bash
push_back 10
push_front 20
pop_back
# Ausgabe: 10
pop_front
# Ausgabe: 20
end
