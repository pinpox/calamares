/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   Copyright 2019, Adriaan de Groot <groot@kde.org>
 *
 *   Calamares is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Calamares is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Calamares. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef UNPACKFSJOB_H
#define UNPACKFSJOB_H

#include <QObject>
#include <QVariantMap>

#include <CppJob.h>

#include <utils/PluginFactory.h>

#include <PluginDllMacro.h>

class PLUGINDLLEXPORT UnpackFSJob : public Calamares::CppJob
{
    Q_OBJECT

public:
    explicit UnpackFSJob( QObject* parent = nullptr );
    virtual ~UnpackFSJob() override;

    QString prettyName() const override;

    Calamares::JobResult exec() override;

    void setConfigurationMap( const QVariantMap& configurationMap ) override;

private:
};

CALAMARES_PLUGIN_FACTORY_DECLARATION( UnpackFSJobFactory )

#endif  // UNPACKFSJOB_H
