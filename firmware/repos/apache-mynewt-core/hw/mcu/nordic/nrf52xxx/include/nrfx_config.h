/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef NRFX_CONFIG_H__
#define NRFX_CONFIG_H__

#if NRF52
#include "nrfx52_config.h"
#elif NRF52810_XXAA
#include "nrfx52810_config.h"
#elif NRF52811_XXAA
#include "nrfx52811_config.h"
#elif NRF52840_XXAA
#include "nrfx52840_config.h"
#else
#error Unsupported chip selected
#endif

#endif // NRFX_CONFIG_H__
