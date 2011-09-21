
zip -r QTFFmpegWrapper-20100323.zip doc -x *.bak
zip -r QTFFmpegWrapper-20100323.zip example -x *.bak -x example/release/* -x example/debug/*
zip -r QTFFmpegWrapper-20100323.zip QTFFmpegWrapper -x *.bat
zip QTFFmpegWrapper-20100323.zip * -x *.bat -x .hg/ -x *.bak -x *.zip



