ldapsearch -Q uid="z*" | grep ^cn | sed 's/cn: //' | sort -rf
