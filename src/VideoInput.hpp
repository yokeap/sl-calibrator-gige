/*
Copyright (c) 2012, Daniel Moreno and Gabriel Taubin
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Brown University nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL DANIEL MORENO AND GABRIEL TAUBIN BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef __VIDEOINPUT_HPP__
#define __VIDEOINPUT_HPP__

#include <QThread>
#include <QStringList>
#include <QImage>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <pylon/PylonIncludes.h>

#include <pylon/gige/BaslerGigEInstantCamera.h>


class VideoInput : public QThread
{
    Q_OBJECT

public:
    VideoInput(QObject * parent = 0);
    ~VideoInput();

    inline void stop(void) {_stop = true;}
    inline void set_camera_index(int index) {_camera_index = index;}
    inline int get_camera_index(void) const {return _camera_index;}

    static QStringList list_devices(void);

    void waitForStart(void);

signals:
    void new_image(cv::Mat image);

protected:
    virtual void run();

private:
    static QStringList list_devices_dshow(bool silent);
    static QStringList list_devices_quicktime(bool silent);
    static QStringList list_devices_v4l2(bool silent);
    static QStringList list_devices_gige(bool silent);

    void configure_dshow(int index, bool silent);
    void configure_quicktime(int index, bool silent);
    void configure_v4l2(int index, bool silent);

    bool start_camera(void);
    void stop_camera(void);

private:
    int _camera_index;
    //CvCapture * _video_capture;
    Pylon::CInstantCamera _video_capture;

    volatile bool _init;
    volatile bool _stop;
};

#endif  /* __VIDEOINPUT_HPP__ */
