# 📖 Инструкция по установке модов TerjeMods

Добро пожаловать! Эта инструкция поможет вам установить моды **TerjeMods** на сервер **DayZ**, учитывая их зависимости и особенности. Следуйте шагам, указанным ниже, чтобы обеспечить корректную работу модификаций.

---

## Список модов

Моды **TerjeMods** и их зависимости:  
- **[TerjeCore](https://steamcommunity.com/sharedfiles/filedetails/?id=3359676785)** — ядро, необходимое для работы всех остальных модов.  
- **[TerjeMedicine](https://steamcommunity.com/sharedfiles/filedetails/?id=3359677479)** — медицина, требует наличия **TerjeCore**.  
- **[TerjeSkills](https://steamcommunity.com/sharedfiles/filedetails/?id=3359678303)** — перки, требует наличия **TerjeCore**.
- **[TerjeRadiation](https://steamcommunity.com/sharedfiles/filedetails/?id=3370455714)** — радиация, требует наличия **TerjeCore**. Дополнительные лекарства при использовании мода **TerjeMedicine**.
- **[TerjeCompatibilityCOT](https://steamcommunity.com/sharedfiles/filedetails/?id=3359679668)** — мод для совместимости с админкой *Community Online Tools*.  
- **[TerjeCompatibilityVPP](https://steamcommunity.com/sharedfiles/filedetails/?id=3359680178)** — мод для совместимости с админкой *Vanilla Plus Plus Admin Tools*.  

> **Важно:** Для расширенной работы перков и медицины требуется установить все три мода:  
**TerjeCore**, **TerjeMedicine**, **TerjeSkills**, **TerjeRadiation**.

---

## Установка через `.bat` файл

### Шаги:

1. Подпишитесь на требуемые моды в **Steam Workshop** согласно [списка модов](#список-модов):

2. Перейдите в папку `DayZServer`, где находится файл `DayZServer_x64.exe`.

3. Создайте или откройте `.bat` файл (например, `StartServer.bat`) и добавляем следующие строки:

   Для установки всех модов:
   ```bat
   -mod=@CF;@Community-Online-Tools;@TerjeCore;@TerjeCompatibilityCOT;@TerjeMedicine;@TerjeSkills;@TerjeRadiation;
   ```
4. Итоговая строка запуска сервера будет выглядеть следующим образом:
   ```bat
   start DayZServer_x64.exe -mod=@CF;@Community-Online-Tools;@TerjeCore;@TerjeCompatibilityCOT;@TerjeMedicine;@TerjeSkills;@TerjeRadiation; -config=serverDZ.cfg -profiles=./profiles -port=2302
   ```
5. Сохраните файл, сделайте обязательно [полный вайп](#как-произвести-вайп-сервера) и запустите сервер, запустив созданный (сохраненный) файл **.bat**.

## Установка через панель хостинга
### Шаги:

1. Войдите в панель управления хостингом, где размещен ваш сервер DayZ.

2. Перейдите в раздел управления модами.

3. Установите требуемые вам моды через Steam Workshop согласно [списка модов](#список-модов)
4. Перейдите в настройки сервера и проверьте строку загрузки модов. Убедитесь, что моды загружаются в правильном порядке. Она должна выглядеть примерно так:
    ```cs
    @CF;@Community-Online-Tools;@TerjeCore;@TerjeCompatibilityCOT;@TerjeMedicine;@TerjeSkills;@TerjeRadiation; 
    ```
5. Сохраните настройки, сделайте обязательно [полный вайп](#как-произвести-вайп-сервера) и перезапустите сервер.

## Установка через панель Omega
### Шаги:
1. Зайдите в вашу панель Omega

2. Выберите настраиваемый сервер, выключите сервер и после нажмите **Overview**

3. Откройте раздел **Mod Configuration**:

4. Найдите и установите требуемые моды согласно [списка модов](#список-модов)

5. Расположите порядок загрузки модов в таком порядке:
    ```cs
    @CF;@Community-Online-Tools;@TerjeCore;@TerjeCompatibilityCOT;@TerjeMedicine;@TerjeSkills;@TerjeRadiation; 
    ```
    И нажмите **Save changes**.
6. Нажимаем кнопку **Back** и жмем **install mods**
7. Дожидаемся установки модов, делаем [полный вайп](#как-произвести-вайп-сервера) сервера и запускаем сервер.

## Как произвести ВАЙП сервера
1. Выключите сервер.
2. Перейдите в папку **DayZServer/mpmission**
3. Откройте папку с вашей картой, допустим **dayzOffline.chernarusplus**
4. Удаляем папку **storage_1**
5. Вайп произведен, можете включить сервер.

## Примечания
1. **Обновления:** Убедитесь, что все моды обновлены до последней версии.
2. **Проверка зависимостей:** Убедитесь, что все зависимости установлены корректно.
3. **Вайп сервера:** После установки модов обязательно сделайте вайп сервера.

## Поддержка
Если у вас возникли вопросы, проблемы с установкой или нужны рекомендации, обращайтесь:

- [**Discord**](https://discord.gg/Ec5t3MwnaE) сообщество
- Раздел [**Issues**](../../../../../issues)  на GitHub проекта.


