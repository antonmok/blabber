#!/bin/bash

ps -a | grep http_server | awk '{ print $1 }' | xargs kill
echo "Stoped HTTP Server"

ps -a | grep websocket_srv | awk '{ print $1 }' | xargs kill
echo "Stoped Websocket Server"
