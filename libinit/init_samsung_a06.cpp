/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>
#include <unistd.h>

#include "vendor_init.h"

static const variant_info_t a065f_info = {
    .hwc_value = "",
    .sku_value = "a06",

    .brand = "Samsung",
    .device = "a06",
    .marketname = "Samsung Galaxy A06",
    .model = "SM-A056F",
    .build_fingerprint = "samsung/a06xx/a06:12/SP1A.210812.016/A065FXXS2AXJ2:user/release-keys"
};

static const variant_info_t a065m_info = {
    .hwc_value = "",
    .sku_value = "a06",

    .brand = "Samsung",
    .device = "a06",
    .marketname = "Samsung Galaxy A06",
    .model = "SM-A065m",
    .build_fingerprint = "samsung/a06xx/a06:12/SP1A.210812.016/A065MXXS2AXJ2:user/release-keys"
};


static const std::vector<variant_info_t> variants = {
    a065m_info,
    a065f_info,
};

void vendor_load_properties() {
    if (access("/system/bin/recovery", F_OK) != 0) {
        search_variant(variants);
    }
}
