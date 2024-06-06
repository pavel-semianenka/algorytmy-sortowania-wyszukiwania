# algorytmy-sortowania-wyszukiwania

Oddanie programów/projektów

1. Repozytorium kody na github
- commity

???
- pull request z akceptacją na osobnej gałęzi/ branchy - jakaś funkcja/ poprawka w kodzie, zmiana nazwy zmiennej itd. - zrealizujemy na zajęciach po feriach i wtedy podsumujemy gita 
lub można spróbować zrealizować podczas ferii.
https://www.youtube.com/watch?v=8lGpZkjnkt4
???

2. Algorytmy sortowania
- bąbelkowe
- przez wstrząsanie / koktajlowe
- przez scalanie
- szybkie
- przez wstawianie - najlepiej przyjmwać tablicę nieposortowana a w funkcji zwracać tablicę posortowaną - parametr poprzez wskażnik.

  Powyższe sortowania powinny być realizowane w osobnych funkcjach.
  Funkcje będą zwracały void, zaś przyjmowały jako parametry tablicę, rozmiar tablicy, w wstawianiu dwie tablice, jeden rozmiar (ten sam)

3. Algorytmy wyszukiwania
- liniowe
- liniowe z wartownikiem
- skokowe
- binarne
- interpolacyjne - realizowane przybliżanie według wzoru podanego na lekcji (26.01.2024)

Funkcje zwracają index klucza w tablicy,
Jako argumenty przyjmują tablicę, jej rozmiar, oraz klucz np.:
int search(int *t, int size, int key);

4. Projekt powinien być podzielony na 3 pliki (forma biblioteki)

4) 1. plik *.cpp zawiera jedynie dołaczenie pliku (#include "plik.hpp") .hpp z deklaracjami funkcji.
   Oraz TYLKO i WYŁĄCZNIE finkcję main prezentującą zaimplementowane algorytmy
4) 2. plik *.cpp zawiera implementacje poszczególnych algorytmów i dołączenie pliku z deklaracjami funkcji (#include "plik.hpp")
4) 3. plik .hpp zawiera jedynie deklaracje funkcji.

prezentacja na zajęciach (26.01.2024) podziału na pliki

Dodatkowo proszę zastanowić się przy których parametrach funkcji można użyć const, i wykorzystać we właściwych miejscach programu, przykład
int search(const int *t, int size, int key);

Proszę zadbac o odpowiednie
- formatowanie kodu, wcięcia tabulacje spacje.
- nazwy zmiennych, funkcji, plików
- przekazywnie argumentów (np. const)
- nazwy commitów na repozytorium
- prezentacje algorytmów w main,
  algorytmy wyszukiwania dla istniejącego klucza powinny zwracać jego index
  warto zaprezentować te algorytmy dla nie istniejącego klucza, w tym przypadku wynikiem powinno być -1

W podpunkcie 3, w algorytmach wyszukiwania można używać tablicy zdefiniowanej wraz z wartościami, nie zaś z wartościami generowanymi losowo jak w przypadku algorytmów sortowania
