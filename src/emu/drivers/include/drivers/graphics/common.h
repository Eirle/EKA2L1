/*
 * Copyright (c) 2019 EKA2L1 Team
 * 
 * This file is part of EKA2L1 project
 * (see bentokun.github.com/EKA2L1).
 * 
 * Initial contributor: pent0
 * Contributors:
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <cstdint>

namespace eka2l1::drivers {
    using handle = std::uint64_t;

    enum class graphic_api {
        opengl,
        vulkan
    };

    class graphics_object {
        virtual int holder() {
            return 0;
        }
    };

    enum class graphics_primitive_mode : std::uint8_t {
        triangles
    };

    enum class data_format {
        byte = 0,
        sbyte = 1,
        word = 2,
        sword = 3,
        sfloat = 4,
        uint = 5,
        sint = 6
    };

    enum class blend_equation {
        add,
        sub,
        isub
    };

    enum class blend_factor {
        one = 0,
        zero = 1,
        frag_out_alpha = 2,
        one_minus_frag_out_alpha = 3,
        current_alpha = 4,
        one_minus_current_alpha = 5
    };

    enum clear_bits : std::uint8_t {
        clear_bit_color_buffer = 1 << 0,
        clear_bit_depth_buffer = 1 << 1
    };

    enum bitmap_draw_flags {
        bitmap_draw_flag_use_brush = 1 << 0,
        bitmap_draw_flag_invert_mask = 1 << 1,
    };
}
