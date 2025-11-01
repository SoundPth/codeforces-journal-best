# Работа с STL

C++ - 10e8 операций в секунду

Python - 10e6 операций в секунду


**O - асимптотика**

*O(x) = y, если найдется C, такая что c * x <= y.*

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    //нельзя пользоваться printf, scanf
    cin.tie(nullptr);
    cout.tie(nullptr);
    //делает вывод и ввод независимыми друг от друга
    
    cout << "aboba" << '\n';
    // '\n' будет быстрее endl так как не сбрасывает КЭШ вывода, так что пользуемся '\n'

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endef
}
```
---
## vector
```cpp
int n;
cin >> n;
vector <int> vec;

push_back(x); // добавить элемент в конец
// Амортизированная O(симптотика) за 1, так как при элементе 2^3 capacity = v.size()
// то все переносится в другой массив в 2 раза больше за O(n), но так как в остальные случаи
// все происходит за O(1), то асимтота за 1
```
---
## Итераторы

это указание на элементы, примеры: begin(), end().  
for (it = a.begin(); it != a.end(); it++)  
чтобы получить значение элемента итератора ставим звездoчку *it

```cpp
int main() {
    int n;
    cin >> n;
    vector <int> v{1, 2, 3, 4, 5};
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
}
```
---
## Set, map, unordered_set, unordered_map
---

В **set(множество)** хранятся только уникальные значения,  
В **multiset** хранятся все значения, оба хранят все элементы в порядке возрастания    
**Операции:**   
size(), insert(x) - добавить элемент, erase(x) - удалить элемент,   
s.find(x) находит элемент и указывает на него через итератор   
s.count(x) кол_во элементов   

В **unordered set** сделано через таблицу(хеши), ставит галочку над числом если есть элемент

Map(ассщциативный массив)
---
**ключ -> значение**     
Обращаемся по ключу    
**Операции**    
insert({key, value})       
erase({key, value}), erase(key), erase(it)    
Если обратимся к элементу, которого нет выведет ошибку!     








