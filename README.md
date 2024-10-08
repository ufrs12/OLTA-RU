# OLTA-RU
Open Logical Tools Architecture  

В данный момент в этом разделе разрабатываются и строятся инструменты, приспособления и станки для изготовления печатных плат, запайки элементной базы, сборки и корпусирования электронных изделий.  

## Варианты и этапы создания печатных плат
```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

   
    A([Обозначения])
    B([Отвергаю]):::class5
    C([Хотелось бы избежать.
      Мне не подходит.]):::class4
    D([Мой вариант]):::class3
    E([Более технологичный
      вариант, чем мой.
      Возможно, к нему неплохо было бы
      стремиться в будущем.]):::class2
    F([Сверхтехнологичный для меня,
      даже не рассматриваю
      на обозримое будущее.]):::class1

    A-->B;
    A-->C;
    A-->D;
    A-->E;
    A-->F;

```

```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

    Z([Виды плат])
    A([Односторонние]):::class3
    B([Двухсторонние]):::class2
    C([С меднением отвертий]):::class2
    D([Без меднения
      отверстий]):::class2
    
    Z-->A;
    Z-->B;

    B-->C;
    B-->D;
```

```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

    Z([Исполнение медного слоя])
    A([Травление]):::class3
    B([Фрезерование]):::class2
    
    Z-->A;
    Z-->B;

```

```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

    Z([Технология защиты меди от травления])
    A([ЛУТ]):::class5
    B([Фоторезист]):::class3
    C([Пленочный]):::class3
    D([Жидкий]):::class2

    Z-->A;
    Z-->B;

    B-->C;
    B-->D;
```

```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

   Z([Варианты экспонирования])
   A([Фотошаблон]):::class3
   B([Прямое]):::class2
   C([Лазером с ЧПУ]):::class2
   D([Через матрицу]):::class2

   Z-->A;
   Z-->B;
   B-->C;
   B-->D;

```

```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

    Z([Масштаб])
    A([Отдельными платами]):::class3
    B([Кучей плат на одном листе]):::class2
    C([С технологическими полями]):::class4
    D([В чистовой размер]):::class3
    E([С первоначальным раскроем]):::class2
    F([Без первоначального раскроя]):::class2
    G([Раскройка текстолита]):::class3
    H([Раскройка текстолита]):::class2
    Z-->A;
    Z-->B;

    A-->C;
    A-->D;
    C-->G;
    D-->G;

    B-->E;
    B-->F;
    E-->H;
```

```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

    Z([Реактивы для травления])
    A([Хлорное железо]):::class3
    B([Другие]):::class2
    C([Сухое]):::class3
    D([Водное]):::class4
    
    Z-->A;
    Z-->B;

    A-->C;
    A-->D;
```

```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

    Z([Паяльная маска])
    A([С маской]):::class3
    B([Без маски]):::class4
    C([Однокомпонентная]):::class4
    D([Двухкомпонентная]):::class3
    
    Z-->A;
    Z-->B;

    A-->C;
    A-->D;
```

```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

    Z([Лужение])
    A([Сплавом Розе]):::class3
    B([Припоем]):::class4
    C([В глицерине]):::class3
    D([Насухую]):::class4
    
    Z-->A;
    Z-->B;

    A-->C;
    A-->D;
```

```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

    Z([Тип элементной базы для будующей платы])
    A([Преимущественно SMD]):::class3
    B([Только выводные]):::class5

    Z-->A;
    Z-->B;
```

```mermaid
graph TD;
classDef class1 fill:#544457, stroke:#000, stroke-width:4px
classDef class2 fill:#32465e, stroke:#000, stroke-width:4px
classDef class3 fill:#455744, stroke:#000, stroke-width:4px
classDef class4 fill:#5e4832, stroke:#000, stroke-width:4px
classDef class5 fill:#5e3332, stroke:#000, stroke-width:4px

    Z([Шелкография])
    A([Без шелкографии]):::class5
    B([С полимерной шелкографией]):::class2
    C([Медью на медном слое]):::class3
    D([Лазерная гравировка
      на слое без меди]):::class3

    Z-->A;
    Z-->B;
    Z-->C;
    Z-->D;
```







