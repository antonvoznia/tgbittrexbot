# TGBittrixBot
Crypto currency Telegram bot gets information from https://bittrex.com

For a network request is needed to use the Curl library https://curl.haxx.se/libcurl/
For json parser is needed to install https://github.com/nlohmann/json

The bot gets information about cryptocurrency costs and sends the costs into your dialog with the bot.

Now there are 2 varieties:
* subscribe - to od subscribe, and you'll get the actual information every period
* unsubscribe - to do unsubscribe, you'll not get any message from the bot

In the project are files: 
* **bitt_api.h** constants for requests to bittrex.com.
* **api_request.cpp** different functions for executions the requests.
* **telegram_api.cpp** local API for the bot to manipulate with the Telegram web API.
* **local_db.cpp** functions for working (create, delete, update, etc. ...) with a local SQLite database to contain information about (un)subscribed users.
* **logs.cpp** write a message in a log file in excepted situations
* **pipe_db_api.cpp** is a middle layer between local_db.cpp and any API request. The function in the file get information from the local database, compare it with actual information from web-request, and update it if it is needed.
* **tests/unit_tests.cpp** file for unit tests.
