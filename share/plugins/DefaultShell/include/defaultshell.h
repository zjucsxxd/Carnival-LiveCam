// Carnival LiveCam, Augmented reality made easy.
// Copyright (C) 2011-2012  Gonzalo Exequiel Pedone
//
// Carnival LiveCam is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Carnival LiveCam is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Carnival LiveCam.  If not, see <http://www.gnu.org/licenses/>.
//
// Email   : hipersayan DOT x AT gmail DOT com
// Web-Site: https://github.com/hipersayanX/Carnival-LiveCam

#ifndef DEFAULTSHELL_H
#define DEFAULTSHELL_H

#include "shell.h"
#include "gui.h"

class DefaultShell: public Shell
{
    Q_OBJECT

    public:
        QString id();
        QString name();
        QString version();
        QString summary();
        QString type();
        QString thumbnail();
        QString license();
        QString author();
        QString website();
        QString mail();
        bool isConfigurable();
        void begin();
        void end();
        void configure();
        QVariant configs();
        void setConfigs(QVariant configs);
        QWidget *widget();
        QSize viewPortSize();
        QString showPreview();

    public slots:
        void setFrame(const QImage &frame);
        void setPreview(const QImage &frame);
        void updateDevices(const QList<QVariant> &devices, const QStringList &activeSpaces);
        void updatePlugins(const QList<QVariant> &plugins);
        void setControlButtons(QPushButton *toggleMaximizedButton, QPushButton *scaleAndRotateButton);
        void moveDevice(qint32 from, qint32 to);

    private:
        Gui *gui;

    private slots:
        void onViewPortSizeChanged(QSize size);
        void onMouseDoubleClicked(QMouseEvent *event);
        void onMousePositionChanged(QMouseEvent *event);
        void onMousePressed(QMouseEvent *event);
        void onMouseReleased(QMouseEvent *event);
        void onToggleEditMode();
        void onTakePicture();
        void onStartStopRecord();
        void onEnabledDeviceMoved(qint32 from, qint32 to);
        void onDeviceEnable(QString deviceId);
        void onDeviceDisable(QString deviceId);
        void onSetEffect(QString pluginId, QString spaceId);
        void onUnsetEffect(QString pluginId, QString spaceId);
        void onPluginMoved(QString spaceId, qint32 from, qint32 to);
        void onPluginConfigureClicked(QString pluginId);
        void onDeviceConfigureClicked(QString deviceId);
        void onClosed();
};

#endif // DEFAULTSHELL_H