
# v0.1 - 05.03.2021

### Добавлено

* `http_server` - HTTP сервер для обработки POST и GET запросов, реализует API для общения с фронтендом, по умолчанию слушает 8082 порт.
* `websocket_srv` - `websocket` сервер для передачи изображения во фронтенд и общения фронтенда с оборудованием, в данной версии работает как эхо сервер;
* `run.sh`, `stop.sh` - скрипты для запуска и остановки серверов;
* `wxUI` - `websocket` клиент с пользовательским интерфейсом на wxWidgets, отладочное ПО для взаимодействия с `websocket_srv`;

### Изменено

* Взаимодействие с фронтендом выделено в соответствующие отдельные подпроекты;
* Использование `CMake` для сборки проекта;
