@echo off

del QTFFmpegWrapper-src.zip

zip -r QTFFmpegWrapper-src.zip doc -x *.bak
zip -r QTFFmpegWrapper-src.zip example -x *.bak -x example/basic-build-desktop/*
zip -r QTFFmpegWrapper-src.zip QTFFmpegWrapper -x *.bat
zip QTFFmpegWrapper-src.zip * -x *.bat -x .svn/ -x *.bak -x *.zip

