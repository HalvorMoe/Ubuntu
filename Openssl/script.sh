#!/bin/bash
for i in {0000..9999}; do
  echo $i
  if openssl enc -aes-256-cbc -d -md md5 -in "kryptert.dta" -out "dekryptert.txt" 2>/dev/null -k $i &&
    file dekryptert.txt | grep ': ISO-8859'
  then echo $i:; cat dekryptert.txt;break
  fi
done