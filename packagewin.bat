@echo off
rd /s /q bin
md bin
rem copy C:\QtSDK\Desktop\Qt\4.8.0\mingw\bin\libgcc_s_dw2-1.dll bin
rem copy C:\QtSDK\Desktop\Qt\4.8.0\mingw\bin\mingwm10.dll bin
rem copy C:\QtSDK\Desktop\Qt\4.8.0\mingw\bin\QtGui4.dll bin
rem copy C:\QtSDK\Desktop\Qt\4.8.0\mingw\bin\QtCore4.dll bin

copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\libgcc_s_sjlj-1.dll bin
copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\libwinpthread-1.dll bin
copy "C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\libstdc++-6.dll" bin
copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\icuin49.dll bin
copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\icuuc49.dll bin
copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\icudt49.dll bin
copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\Qt5Gui.dll bin
copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\Qt5Widgets.dll bin
copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\Qt5Core.dll bin
copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\libGLESv2.dll bin
copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\D3DCompiler_43.dll bin
copy C:\Qt\Qt5.0.2\5.0.2\mingw47_32\bin\libEGL.dll bin



copy ffmpeg_lib_win32\*.dll bin

copy example\build-simpleencdec-Desktop\release\simpleencdec.exe bin
copy README bin


cd bin
del ..\qtffmpegwrapper_win.zip
zip ..\qtffmpegwrapper_win.zip *
cd ..
rem rd /s /q bin


