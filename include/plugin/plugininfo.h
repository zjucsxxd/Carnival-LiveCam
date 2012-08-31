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

#ifndef PLUGININFO_H
#define PLUGININFO_H

#include "plugin.h"

class PluginInfo: public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString fileName READ fileName WRITE setFileName RESET resetFileName)
    Q_PROPERTY(QString pluginId READ pluginId WRITE setPluginId RESET resetPluginId)
    Q_PROPERTY(QString name READ name WRITE setName RESET resetName)
    Q_PROPERTY(QString version READ version WRITE setVersion RESET resetVersion)
    Q_PROPERTY(QString summary READ summary WRITE setSummary RESET resetSummary)
    Q_PROPERTY(Plugin::PluginType type READ type WRITE setType RESET resetType)
    Q_PROPERTY(QString category READ category WRITE setCategory RESET resetCategory)
    Q_PROPERTY(QString thumbnail READ thumbnail WRITE setThumbnail RESET resetThumbnail)
    Q_PROPERTY(QString license READ license WRITE setLicense RESET resetLicense)
    Q_PROPERTY(QString author READ author WRITE setAuthor RESET resetAuthor)
    Q_PROPERTY(QString website READ website WRITE setWebsite RESET resetWebsite)
    Q_PROPERTY(QString mail READ mail WRITE setMail RESET resetMail)
    Q_PROPERTY(bool isConfigurable READ isConfigurable WRITE setIsConfigurable RESET resetIsConfigurable)

    public:
        explicit PluginInfo(QObject *parent = 0);
        PluginInfo(const PluginInfo &object);

        PluginInfo(QString fileName,
                   QString pluginId,
                   QString name,
                   QString version,
                   QString summary,
                   Plugin::PluginType type,
                   QString category,
                   QString thumbnail,
                   QString license,
                   QString author,
                   QString website,
                   QString mail,
                   bool isConfigurable);

        PluginInfo& operator =(const PluginInfo &other);

        Q_INVOKABLE QMap<QString, QVariant> toMap();

        QString fileName();
        QString pluginId();
        QString name();
        QString version();
        QString summary();
        Plugin::PluginType type();
        QString category();
        QString thumbnail();
        QString license();
        QString author();
        QString website();
        QString mail();
        bool isConfigurable();

    private:
        QString m_fileName;
        QString m_pluginId;
        QString m_name;
        QString m_version;
        QString m_summary;
        Plugin::PluginType m_type;
        QString m_category;
        QString m_thumbnail;
        QString m_license;
        QString m_author;
        QString m_website;
        QString m_mail;
        bool m_isConfigurable;

    public slots:
        void setFileName(QString fileName);
        void setPluginId(QString pluginId);
        void setName(QString name);
        void setVersion(QString version);
        void setSummary(QString summary);
        void setType(Plugin::PluginType type);
        void setCategory(QString category);
        void setThumbnail(QString thumbnail);
        void setLicense(QString license);
        void setAuthor(QString author);
        void setWebsite(QString website);
        void setMail(QString mail);
        void setIsConfigurable(bool isConfigurable);
        void resetFileName();
        void resetPluginId();
        void resetName();
        void resetVersion();
        void resetSummary();
        void resetType();
        void resetCategory();
        void resetThumbnail();
        void resetLicense();
        void resetAuthor();
        void resetWebsite();
        void resetMail();
        void resetIsConfigurable();
};

#endif // PLUGININFO_H
