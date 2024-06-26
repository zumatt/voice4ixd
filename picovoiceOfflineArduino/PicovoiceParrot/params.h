
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = hey parrot
static const uint8_t KEYWORD_ARRAY[] = {
        0xa6, 0x1b, 0x25, 0xb7, 0x53, 0xd4, 0x81, 0x69, 0x6f, 0x22, 0xbd, 0x96, 0x08, 0x87, 0x0e, 0xa1, 0x04, 0x97,
        0x1f, 0x81, 0xb2, 0x30, 0x22, 0xda, 0x82, 0xfd, 0xbd, 0x61, 0xa6, 0x8d, 0xbf, 0xa1, 0xff, 0x31, 0x2c, 0x6e,
        0x86, 0xe2, 0xc9, 0xd6, 0x90, 0x56, 0x11, 0x2f, 0xf3, 0x87, 0xe2, 0x58, 0xac, 0x7d, 0x3a, 0x5b, 0x17, 0x19,
        0x91, 0xe4, 0x35, 0x11, 0xe5, 0x08, 0x17, 0x8b, 0x69, 0x00, 0x84, 0xb1, 0x6a, 0x58, 0x0d, 0xef, 0x54, 0x5e,
        0x57, 0xf0, 0xac, 0x66, 0x9b, 0x45, 0xe2, 0xcc, 0x22, 0xa5, 0x25, 0x36, 0xa1, 0xcd, 0x06, 0xda, 0x43, 0x8d,
        0xaa, 0xd4, 0x27, 0x52, 0xf7, 0x1a, 0xa7, 0xeb, 0xdc, 0x5f, 0x6d, 0x03, 0xc8, 0x5c, 0x38, 0x4b, 0x3a, 0xbd,
        0x12, 0xbb, 0x67, 0xce, 0xe6, 0x11, 0x98, 0x47, 0xab, 0x7a, 0x7f, 0x1d, 0x13, 0x2a, 0x7a, 0x99, 0x6a, 0xba,
        0x00, 0xbc, 0x15, 0x44, 0xf4, 0xed, 0xcc, 0x62, 0xa0, 0xf0, 0x8e, 0xf3, 0x97, 0x85, 0xd6, 0x5c, 0x4c, 0xe8,
        0x3b, 0xa4, 0xd1, 0xb8, 0x5b, 0xf6, 0x8d, 0x45, 0xb5, 0xe7, 0x01, 0x07, 0xf5, 0xce, 0x94, 0x29, 0x24, 0xc5,
        0x14, 0x3f, 0x47, 0x43, 0x9a, 0xe4, 0x29, 0x84, 0x49, 0xb3, 0xe2, 0x2d, 0xcc, 0x96, 0xd7, 0xd7, 0x73, 0xbc,
        0x2c, 0x68, 0xa8, 0xa3, 0x6f, 0x2c, 0xd6, 0x33, 0xde, 0xf7, 0xa6, 0x8c, 0x21, 0x46, 0x71, 0xaf, 0x39, 0xec,
        0x98, 0xec, 0xd3, 0x51, 0xaf, 0x7e, 0xda, 0x3e, 0x7c, 0x76, 0x38, 0x08, 0xc6, 0x97, 0x65, 0xf1, 0x33, 0xb3,
        0x80, 0xec, 0x8d, 0xd8, 0xa7, 0xc5, 0x28, 0x72, 0x7f, 0x72, 0xdd, 0xe7, 0x6a, 0xa6, 0x00, 0x2b, 0xfe, 0x88,
        0x16, 0x4a, 0xa2, 0x6a, 0xdb, 0x15, 0x4c, 0xf1, 0x5e, 0x3e, 0x52, 0xb8, 0x62, 0xa9, 0xbd, 0x94, 0x8e, 0xcf,
        0x9f, 0xf6, 0x16, 0x5f, 0xba, 0xac, 0x37, 0x23, 0xc0, 0xf5, 0x38, 0xfc, 0x7f, 0xcc, 0xe0, 0xd4, 0x3b, 0x65,
        0xbb, 0xde, 0xa7, 0x17, 0xec, 0xee, 0x60, 0x81, 0x01, 0xc1, 0x09, 0x67, 0xff, 0x60, 0xac, 0x32, 0x80, 0x73,
        0x3f, 0x8f, 0x7a, 0xae, 0xae, 0x84, 0x86, 0xa1, 0x86, 0x17, 0x05, 0xeb, 0xdc, 0x64, 0xf6, 0xb7, 0x86, 0x23,
        0x30, 0x6b, 0xa0, 0x03, 0x50, 0x06, 0x7a, 0x78, 0x96, 0x0f, 0xb9, 0x7f, 0xa2, 0x09, 0xb3, 0x54, 0x1a, 0x3d,
        0x47, 0x90, 0x93, 0x65, 0x79, 0xf2, 0x68, 0x35, 0xc2, 0x3a, 0xb5, 0xc5, 0x32, 0x0c, 0x6e, 0xd6, 0xd6, 0x8e,
        0x44, 0xa1, 0x17, 0xf2, 0x54, 0x2b, 0xd7, 0x3c, 0xa6, 0x9a, 0x2f, 0xbd, 0x25, 0x6a, 0xa0, 0xa9, 0x5f, 0x9a,
        0xde, 0xce, 0x37, 0x2e, 0x98, 0x36, 0x64, 0xd2, 0xf2, 0x89, 0xef, 0xa3, 0x44, 0xf1, 0xf0, 0x75, 0xac, 0xe6,
        0xa0, 0xc7, 0x9d, 0x8a, 0x6d, 0x46, 0xd4, 0x45, 0x0a, 0x72, 0x8d, 0xec, 0xf9, 0x02, 0xf6, 0x97, 0xdc, 0x6d,
        0xd6, 0x62, 0x0a, 0xa5, 0xe5, 0x38, 0x97, 0x30, 0xfe, 0x91, 0x01, 0x9b, 0x8e, 0x92, 0xaf, 0xbb, 0xd1, 0x3e,
        0xdd, 0x39, 0xae, 0x4c, 0xb0, 0x17, 0x9f, 0x9f, 0xdb, 0xe3, 0xed, 0x76, 0x7f, 0xaf, 0x0d, 0xbd, 0xf1, 0x5c,
        0xc1, 0x40, 0xc4, 0x02, 0x40, 0x8b, 0xa0, 0xa5, 0xa8, 0x42, 0xc7, 0x15, 0x10, 0x3d, 0xfd, 0x38, 0x87, 0x31,
        0xb3, 0xc3, 0x3f, 0xd3, 0x25, 0x21, 0xd2, 0xb1, 0x98, 0x8a, 0xae, 0xfd, 0xac, 0xe8, 0xef, 0x41, 0x84, 0xd4,
        0xe6, 0x59, 0xda, 0xd0, 0x35, 0xa7, 0x09, 0x9a, 0xab, 0x92, 0xbf, 0xbd, 0xa4, 0x5e, 0x9c, 0xb2, 0x91, 0x6d,
        0x9f, 0x1c, 0x6f, 0xdf, 0xa9, 0x80, 0x73, 0x35, 0x8f, 0xba, 0xc6, 0x66, 0x7f, 0x1d, 0xbe, 0x85, 0x1e, 0x73,
        0xcf, 0x3f, 0xc1, 0xd8, 0xfd, 0x6c, 0xc8, 0x52, 0xd5, 0x01, 0x62, 0x51, 0xb0, 0x23, 0x8a, 0x69
};

// context = parrot
static const uint8_t CONTEXT_ARRAY[] = {
        0x72, 0x68, 0x69, 0x6e, 0x6f, 0x33, 0x2e, 0x30, 0x2e, 0x30, 0x08, 0x00, 0x00, 0x00, 0x13, 0xe4, 0x45, 0xf2,
        0xa2, 0x7d, 0x76, 0xd9, 0x65, 0x6e, 0x00, 0x24, 0x00, 0x00, 0x00, 0x62, 0x38, 0x32, 0x34, 0x35, 0x36, 0x34,
        0x32, 0x2d, 0x34, 0x62, 0x33, 0x66, 0x2d, 0x34, 0x63, 0x38, 0x39, 0x2d, 0x62, 0x35, 0x39, 0x38, 0x2d, 0x32,
        0x35, 0x66, 0x37, 0x62, 0x31, 0x36, 0x31, 0x61, 0x38, 0x65, 0x65, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0x00, 0x00, 0x00, 0x00, 0x20, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x63, 0x6f,
        0x6e, 0x74, 0x65, 0x78, 0x74, 0x3a, 0x0a, 0x20, 0x20, 0x65, 0x78, 0x70, 0x72, 0x65, 0x73, 0x73, 0x69, 0x6f,
        0x6e, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x71, 0x48, 0x65, 0x6c, 0x70, 0x3a, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x2d, 0x20, 0x28, 0x70, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x29, 0x20, 0x40, 0x68, 0x65, 0x6c,
        0x70, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x74, 0x68, 0x65, 0x20, 0x24, 0x69, 0x74, 0x65, 0x6d, 0x73, 0x3a,
        0x6f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x28, 0x70, 0x6c, 0x65, 0x61,
        0x73, 0x65, 0x29, 0x20, 0x40, 0x68, 0x65, 0x6c, 0x70, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x24, 0x69, 0x74,
        0x65, 0x6d, 0x73, 0x3a, 0x6f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x75, 0x72,
        0x6e, 0x4f, 0x6e, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x28, 0x70, 0x6c, 0x65, 0x61, 0x73, 0x65,
        0x29, 0x20, 0x73, 0x77, 0x69, 0x74, 0x63, 0x68, 0x20, 0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x24, 0x69,
        0x74, 0x65, 0x6d, 0x73, 0x3a, 0x6f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20,
        0x28, 0x70, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x29, 0x20, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x6e, 0x20, 0x74,
        0x68, 0x65, 0x20, 0x24, 0x69, 0x74, 0x65, 0x6d, 0x73, 0x3a, 0x6f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x74, 0x75, 0x72, 0x6e, 0x4f, 0x66, 0x66, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20,
        0x28, 0x70, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x29, 0x20, 0x5b, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x66, 0x66,
        0x2c, 0x20, 0x73, 0x77, 0x69, 0x74, 0x63, 0x68, 0x20, 0x6f, 0x66, 0x66, 0x5d, 0x20, 0x74, 0x68, 0x65, 0x20,
        0x24, 0x69, 0x74, 0x65, 0x6d, 0x73, 0x3a, 0x6f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x0a, 0x20, 0x20, 0x73, 0x6c,
        0x6f, 0x74, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x74, 0x65, 0x6d, 0x73, 0x3a, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x2d, 0x20, 0x77, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x73,
        0x63, 0x72, 0x65, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x0a,
        0x20, 0x20, 0x6d, 0x61, 0x63, 0x72, 0x6f, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x68, 0x65, 0x6c, 0x70,
        0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x67, 0x69, 0x76, 0x65, 0x20, 0x6d, 0x65, 0x20, 0x61, 0x20,
        0x68, 0x61, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x68, 0x65, 0x6c, 0x70, 0x20, 0x6d, 0x65,
        0x0a, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x61, 0x73, 0x73, 0x69, 0x73, 0x74, 0x20, 0x6d, 0x65, 0x0a, 0x00,
        0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x21, 0x00,
        0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
        0x43, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x5c, 0x00,
        0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x61, 0x73, 0x73, 0x69, 0x73, 0x74, 0x20, 0x6d,
        0x65, 0x00, 0x67, 0x69, 0x76, 0x65, 0x20, 0x6d, 0x65, 0x20, 0x61, 0x20, 0x68, 0x61, 0x6e, 0x64, 0x00, 0x68,
        0x65, 0x6c, 0x70, 0x20, 0x6d, 0x65, 0x00, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x00, 0x6f, 0x6e, 0x00, 0x70, 0x6c,
        0x65, 0x61, 0x73, 0x65, 0x00, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x00, 0x73, 0x77, 0x69, 0x74, 0x63, 0x68,
        0x20, 0x6f, 0x66, 0x66, 0x00, 0x73, 0x77, 0x69, 0x74, 0x63, 0x68, 0x00, 0x74, 0x68, 0x65, 0x00, 0x74, 0x75,
        0x72, 0x6e, 0x20, 0x6f, 0x66, 0x66, 0x00, 0x74, 0x75, 0x72, 0x6e, 0x00, 0x77, 0x69, 0x6e, 0x64, 0x6f, 0x77,
        0x00, 0x77, 0x69, 0x74, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00,
        0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
        0x0f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
        0x26, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x37, 0x00,
        0x00, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
        0x47, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x03, 0x1d,
        0x11, 0x1d, 0x1f, 0x16, 0x12, 0x0f, 0x11, 0x23, 0x16, 0x12, 0x03, 0x10, 0x02, 0x17, 0x09, 0x0f, 0x11, 0x23,
        0x16, 0x12, 0x0d, 0x10, 0x02, 0x17, 0x09, 0x10, 0x0b, 0x15, 0x1b, 0x16, 0x12, 0x15, 0x06, 0x1f, 0x01, 0x17,
        0x04, 0x17, 0x1b, 0x15, 0x12, 0x26, 0x1d, 0x14, 0x1c, 0x12, 0x17, 0x1d, 0x24, 0x11, 0x08, 0x04, 0x0e, 0x1d,
        0x24, 0x11, 0x08, 0x0a, 0x03, 0x0a, 0x12, 0x1f, 0x0c, 0x17, 0x04, 0x0e, 0x1f, 0x0c, 0x17, 0x24, 0x11, 0x17,
        0x09, 0x19, 0x24, 0x11, 0x0a, 0x24, 0x11, 0x20, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
        0x06, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x09, 0x00,
        0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
        0x07, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x69, 0x74,
        0x65, 0x6d, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00,
        0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x6f, 0x62, 0x6a, 0x65,
        0x63, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x72, 0x65, 0x71, 0x48,
        0x65, 0x6c, 0x70, 0x00, 0x74, 0x75, 0x72, 0x6e, 0x4f, 0x66, 0x66, 0x00, 0x74, 0x75, 0x72, 0x6e, 0x4f, 0x6e,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0xcc, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00,
        0x3c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x05, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x8c, 0x00,
        0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x7c, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x20, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xb0, 0x00,
        0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0xc4, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x4c, 0x01, 0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00,
        0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x4c, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x94, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xa8, 0x01, 0x00, 0x00, 0x94, 0x01,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xbc, 0x01, 0x00, 0x00,
        0xa8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00,
        0xcc, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xf4, 0x01,
        0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00
};



#endif // PARAMS_H
    