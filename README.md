### Скетчи

- [Простой скетч (Blynk)](https://github.com/MaxMukovin/EPSP8266-NodeMCU/blob/main/Blynk/Blynk_Simple/Blynk_Simple.ino);
 - [Продвинутый скетч (Blynk)](https://github.com/MaxMukovin/EPSP8266-NodeMCU/blob/main/Blynk/Blynk_Pro/Blynk_Pro.ino)

### Прошивка

1. Устанавливаем приложение Blynk, получаем токен, выбираем устройство NodeMCU / ESP8266
2. Качаем библиотеку Blynk: открываем Arduino IDE, Инструменты / Управлять библиотеками / Blynk
3. Настраиваем менеджер плат: Настройки / Дополнительные ссылки Менеджера плат: *http://arduino.esp8266.com/stable/package_esp8266com_index.json*
4. Загружаем плату: Инструменты / Плата / Менеджер плат /  ESP8266
5. Копируем скетч, меняем auth; ssid; pass.
6. Выбираем нужную плату: Инструменты / Плата / NodeMCU/ESP8266
7. Выбираем порт контроллера: Инструменты / Порт
8. Прошиваем контроллер.

### Распиновка NodeMCU

![](https://github.com/MaxMukovin/EPSP8266-NodeMCU/blob/main/Images/nodemcu_v3_pinout.png)
