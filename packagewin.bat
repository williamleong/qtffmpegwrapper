@echo off
rd /s /q bin
md bin
copy C:\QtSDK\Desktop\Qt\4.8.0\mingw\bin\libgcc_s_dw2-1.dll bin
copy C:\QtSDK\Desktop\Qt\4.8.0\mingw\bin\mingwm10.dll bin
copy C:\QtSDK\Desktop\Qt\4.8.0\mingw\bin\QtGui4.dll bin
copy C:\QtSDK\Desktop\Qt\4.8.0\mingw\bin\QtCore4.dll bin
copy ffmpeg_lib_win32\*.dll bin

copy example\simpleencdec-build-desktop\release\simpleencdec.exe bin
copy README bin


cd bin
del ..\qtffmpegwrapper_win.zip
zip ..\qtffmpegwrapper_win.zip *
cd ..
rem rd /s /q bin


