#!/bin/zsh

echo "is your fav alcohol? "
read ALC

if [ "$ALC" = "Beer" ]; then
    echo "EWWWWWWWW"
elif [ "$ALC" = "Gin" ]; then
    echo "I hope you mean pink"
else
    echo "You should try cider"
fi