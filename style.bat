

@echo off

set astyle="D:\Program Files\AStyle\bin\astyle.exe"

REM ѭ������Ŀ¼


for /r . %%f in (*.cpp;*.c) do %astyle% --style=ansi -s4 -T -S -N -Y -m2 -M40 -f -p --convert-tabs "%%f"
for /r . %%f in (*.hpp;*.h) do %astyle% --style=ansi -s4 -T -S -N -Y -m2 -M40 -f -p --convert-tabs "%%f"

REM ɾ�����е�astyle�����ļ�

for /r . %%a in (*.orig) do del "%%a"

pause
asty