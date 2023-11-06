@echo off
if "%1" == "h" goto begin 
start mshta vbscript:createobject("wscript.shell").run("%~nx0 h",0)(window.close)&&exit 
:begin
tasklist | find /i "piano.exe" && echo "IS Running" || start /b piano.exe