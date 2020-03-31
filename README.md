# Имя

ramgatness - скрипт, который может менять яркость или гамму изображения на экране, или нагружать оперативную память в течение некоторого времени. Изменение гаммы и яркости осуществляется с помощью консольной утилиты xrandr. Нагрузка осуществляется с помощью утилиты stress-ng.

# Командная строка

После названия обязательно прописываются три команды: что будет делать скрипт (payload,gamma,brightness), положение файла, сколько будет длиться обработка каждого символа(в секундах)

./ramgatness.sh file_location action time 

# Пример
```
./ramgatness.sh ../file payload 4 

./ramgatness.sh ../../home/file gamma 3 
```
