/*
 * Copyright (C) 2018 Ispirata Srl
 *
 * This file is part of Astarte.
 * Astarte is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Astarte is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Astarte.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ASTARTE_DEFAULTCREDENTIALSSECRETPROVIDER_H
#define ASTARTE_DEFAULTCREDENTIALSSECRETPROVIDER_H

#include "credentialssecretprovider.h"

namespace Astarte {

class DefaultCredentialsSecretProvider : public CredentialsSecretProvider {
    Q_OBJECT

public:
    DefaultCredentialsSecretProvider(HTTPEndpoint *parent);
    ~DefaultCredentialsSecretProvider();

    void ensureCredentialsSecret() override;

    QByteArray credentialsSecret() const override;

private:
    QByteArray m_credentialsSecret;
};

}

#endif
