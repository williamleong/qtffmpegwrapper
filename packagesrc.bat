@echo off

del qtffmpegwrapper_src.zip

zip -r qtffmpegwrapper_src.zip doc -x *.bak
zip -r qtffmpegwrapper_src.zip example -x *.bak -x example/*-build-desktop/*
zip -r qtffmpegwrapper_src.zip QTFFmpegWrapper -x *.bat
zip qtffmpegwrapper_src.zip * -x *.bat -x .svn/ -x *.bak -x *.zip

