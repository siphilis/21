#!/bin/sh
cat /etc/passwd | cut -d ':' -f 1 | sed '1!n;d' | rev | tac | tr '\r\n' '%' | sed 's/\%/, /g' | sed 's/, $/.\n/'
