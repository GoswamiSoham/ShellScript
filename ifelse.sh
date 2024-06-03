#!/bin/bash
echo enter your age:
read age
if [ $age -eq 18 ]
then
echo you are eligible
else
echo you are not eligible
fi