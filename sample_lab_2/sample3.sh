#! /bin/bash
VALID_PASSWORD=abcd1234
echo "Please enter the password:"
read PASSWORD

if [ $PASSWORD == $VALID_PASSWORD ]; then
	echo "You have access!"
else
	echo "ACCESS DENIED!"
fi
