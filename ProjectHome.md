# QtFFmpegWrapper #

QtFFmpegWrapper provides a set of QT classes wrapping FFMPEG and allowing for video encoding and video decoding (no audio).
It uses QT QImage to exchange video frames with the encoder/decoder.

## News ##

  * 07.05.2013:
    * Updated to compile qith Qt5.x

  * 17.03.2012:
    * New API encodeImagePts to set the presentation time stamp of a frame. This allows to create variable frame rate videos. See the example.


  * 21.09.2011:
    * Migrated the repository from mercurial to subversion. The revision history is lost - the last mercurial version is the first checkin of the subversion.
    * Updated to FFmpeg git-a254452 2011-09-19
    * QVideoEncoder now allows to specify the video fps (previously fixed to 25)
    * Binaries of QTFFmpegWrapper examples provided in the downloads

## Wrapper classes ##

### QVideoEncoder: frame-by-frame video encoder class ###
  * Encoded video frames are provided as QImage.
  * Output format: any container supported by FFmpeg

### QVideoDecoder: video decoder class ###
  * Input format: any supported by FFmpeg
  * Decoded video frames can be accessed directly as a QImage for further processing before display.
  * Seek functions: to specific frame, to specific time, to next frame
