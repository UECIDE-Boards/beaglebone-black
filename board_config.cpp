#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

#include <wiring_pins.h>
#include <pins_arduino.h>

struct _pin _pins_gpio[] {
    // P9 (yes, I read left to right, so P9 comes before P8).
    {  __NOT_A_PIN, -1, 0,  },  // 0    No pin 0! Start numbering at 1.

    {  __NOT_A_PIN, -1, 0   },  // 1  P9_1   DGND
    {  __NOT_A_PIN, -1, 0   },  // 2  P9_2   DGND
    {  __NOT_A_PIN, -1, 0   },  // 3  P9_3   VDD 3.3V
    {  __NOT_A_PIN, -1, 0   },  // 4  P9_4   VDD 3.3V
    {  __NOT_A_PIN, -1, 0   },  // 5  P9_5   VDD 5V
    {  __NOT_A_PIN, -1, 0   },  // 6  P9_6   VDD 5V
    {  __NOT_A_PIN, -1, 0   },  // 7  P9_7   SYS 5V
    {  __NOT_A_PIN, -1, 0   },  // 8  P9_8   SYS 5V
    {  __NOT_A_PIN, -1, 0   },  // 9  P9_9   POWER
    {  __NOT_A_PIN, -1, 0   },  // 10 P9_10  RESET
    {           30, -1, 0   },  // 11 P9_11  UART4 RXD
    {           60, -1, 0   },  // 12 P9_12  GPIO 60
    {           31, -1, 0   },  // 13 P9_13  UART4 TXD
    {           50, -1, 0   },  // 14 P9_14  EHRPWM1A
    {           48, -1, 0   },  // 15 P9_15  GPIO 48
    {           51, -1, 0   },  // 16 P9_16  EHRPWM1B
    {            5, -1, 0   },  // 17 P9_17  SPI0_CS0
    {            4, -1, 0   },  // 18 P9_18  SPI0 SDI
    {  __NOT_A_PIN, -1, 0   },  // 19 P9_19  I2C2 SCL
    {  __NOT_A_PIN, -1, 0   },  // 20 P9_20  I2C2 SDA
    {            3, -1, 0   },  // 21 P9_21  SPI0 SDO
    {            2, -1, 0   },  // 22 P9_22  SPI0 SCK
    {           49, -1, 0   },  // 23 P9_23  GPIO 49
    {           15, -1, 0   },  // 24 P9_24  UART1 TXD
    {          117, -1, 0   },  // 25 P9_25  GPIO 117
    {           14, -1, 0   },  // 26 P9_26  UART1 RXD
    {          115, -1, 0   },  // 27 P9_27  GPIO 115
    {          113, -1, 0   },  // 28 P9_28  SPI1 CS0
    {          111, -1, 0   },  // 29 P9_29  SPI1 SDO
    {          112, -1, 0   },  // 30 P9_30  GPIO 112
    {          110, -1, 0   },  // 31 P9_31  SPI1 SCK
    {  __NOT_A_PIN, -1, 0   },  // 32 P9_32  VDD ADC
    {  __NOT_A_PIN, -1, 0   },  // 33 P9_33  AIN 4
    {  __NOT_A_PIN, -1, 0   },  // 34 P9_34  GNDA ADC
    {  __NOT_A_PIN, -1, 0   },  // 35 P9_35  AIN 6
    {  __NOT_A_PIN, -1, 0   },  // 36 P9_36  AIN 5
    {  __NOT_A_PIN, -1, 0   },  // 37 P9_37  AIN 2
    {  __NOT_A_PIN, -1, 0   },  // 38 P9_38  AIN 3
    {  __NOT_A_PIN, -1, 0   },  // 39 P9_39  AIN 0
    {  __NOT_A_PIN, -1, 0   },  // 40 P9_40  AIN 1
    {           20, -1, 0   },  // 41 P9_41  GPIO 20
    {            7, -1, 0   },  // 42 P9_42  ECAPPWM0
    {  __NOT_A_PIN, -1, 0   },  // 43 P9_43  DGND
    {  __NOT_A_PIN, -1, 0   },  // 44 P9_44  DGND
    {  __NOT_A_PIN, -1, 0   },  // 45 P9_45  DGND
    {  __NOT_A_PIN, -1, 0   },  // 46 P9_46  DGND

    {  __NOT_A_PIN, -1, 0   },  // 47 P8_1   DGND
    {  __NOT_A_PIN, -1, 0   },  // 48 P8_2   DGND
    {           38, -1, 0,  },  // 49 P8_3   MMC1 DAT6
    {           39, -1, 0,  },  // 50 P8_4   MMC1 DAT7
    {           44, -1, 0,  },  // 51 P8_5   MMC1 DAT2
    {           35, -1, 0,  },  // 52 P8_6   MMC1 DAT3
    {           66, -1, 0,  },  // 53 P8_7   GPIO 66 / Timer 4
    {           67, -1, 0,  },  // 54 P8_8   GPIO 67 / Timer 7
    {           69, -1, 0,  },  // 55 P8_9   GPIO 69 / Timer 5
    {           68, -1, 0,  },  // 56 P8_10  GPIO 68 / Timer 6
    {           45, -1, 0,  },  // 57 P8_11  GPIO 45
    {           44, -1, 0,  },  // 58 P8_12  GPIO 44
    {           23, -1, 0,  },  // 59 P8_13  EHRPWM2B
    {           26, -1, 0,  },  // 60 P8_14  GPIO 26
    {           47, -1, 0,  },  // 61 P8_15  GPIO 47
    {           46, -1, 0,  },  // 62 P8_16  GPIO 46
    {           27, -1, 0,  },  // 63 P8_17  GPIO 27
    {           65, -1, 0,  },  // 64 P8_18  GPIO 65
    {           22, -1, 0,  },  // 65 P8_19  EHRPWM2A
    {           63, -1, 0,  },  // 66 P8_20  MMC1 CMD
    {           62, -1, 0,  },  // 67 P8_21  MMC1 CLK
    {           37, -1, 0,  },  // 68 P8_22  MMC1 DAT5
    {           36, -1, 0,  },  // 69 P8_23  MMC1 DAT4
    {           33, -1, 0,  },  // 70 P8_24  MMC1 DAT1
    {           32, -1, 0,  },  // 71 P8_25  MMC1 DAT0
    {           61, -1, 0,  },  // 72 P8_26  GPIO 61
    {           86, -1, 0,  },  // 73 P8_27  LCD VSYNC
    {           88, -1, 0,  },  // 74 P8_28  LCD PCLK
    {           87, -1, 0,  },  // 75 P8_29  LCD HSYNC
    {           89, -1, 0,  },  // 76 P8_30  LCD AC BIAS
    {           10, -1, 0,  },  // 77 P8_31  LCD DATA14
    {           11, -1, 0,  },  // 78 P8_32  LCD DATA15
    {            9, -1, 0,  },  // 79 P8_33  LCD DATA13
    {           81, -1, 0,  },  // 80 P8_34  LCD DATA11
    {            8, -1, 0,  },  // 81 P8_35  LCD DATA12
    {           80, -1, 0,  },  // 82 P8_36  LCD DATA10
    {           78, -1, 0,  },  // 83 P8_37  LCD DATA8
    {           79, -1, 0,  },  // 84 P8_38  LCD DATA9
    {           76, -1, 0,  },  // 85 P8_39  LCD DATA6
    {           77, -1, 0,  },  // 86 P8_40  LCD DATA7
    {           74, -1, 0,  },  // 87 P8_41  LCD DATA4
    {           76, -1, 0,  },  // 88 P8_42  LCD DATA5
    {           72, -1, 0,  },  // 89 P8_43  LCD DATA2
    {           73, -1, 0,  },  // 90 P8_44  LCD DATA3
    {           70, -1, 0,  },  // 91 P8_45  LCD DATA0
    {           71, -1, 0,  },  // 92 P8_46  LCD DATA1
};

const char *_analog_in[] = {
    "/sys/bus/iio/devices/iio:device0/in_voltage0_raw", // 0
    "/sys/bus/iio/devices/iio:device0/in_voltage1_raw", // 1
    "/sys/bus/iio/devices/iio:device0/in_voltage2_raw", // 2
    "/sys/bus/iio/devices/iio:device0/in_voltage3_raw", // 3
    "/sys/bus/iio/devices/iio:device0/in_voltage4_raw", // 4
    "/sys/bus/iio/devices/iio:device0/in_voltage5_raw", // 5
    "/sys/bus/iio/devices/iio:device0/in_voltage6_raw", // 6
    NULL,                                               // 7
    NULL,                                               // 8
    NULL,                                               // 9
    NULL,                                               // 10
    NULL,                                               // 11
    NULL,                                               // 12
    NULL,                                               // 13
    NULL,                                               // 14
    NULL,                                               // 15
    NULL,                                               // 16
    NULL,                                               // 17
    NULL,                                               // 18
    NULL,                                               // 19
    NULL,                                               // 20
    NULL,                                               // 21
    NULL,                                               // 22
    NULL,                                               // 23
    NULL,                                               // 24
    NULL,                                               // 25
    NULL,                                               // 26
    NULL,                                               // 27
    NULL,                                               // 28
    NULL,                                               // 29
    NULL,                                               // 30
    NULL,                                               // 31
    NULL,                                               // 32
    "/sys/bus/iio/devices/iio:device0/in_voltage4_raw", // 33
    NULL,                                               // 34
    "/sys/bus/iio/devices/iio:device0/in_voltage6_raw", // 35
    "/sys/bus/iio/devices/iio:device0/in_voltage5_raw", // 36
    "/sys/bus/iio/devices/iio:device0/in_voltage2_raw", // 37
    "/sys/bus/iio/devices/iio:device0/in_voltage3_raw", // 38
    "/sys/bus/iio/devices/iio:device0/in_voltage0_raw", // 39
    "/sys/bus/iio/devices/iio:device0/in_voltage1_raw", // 50
    NULL,                                               // 51
    NULL,                                               // 52
    NULL,                                               // 53
    NULL,                                               // 54
    NULL,                                               // 55
    NULL,                                               // 56
    NULL,                                               // 57
    NULL,                                               // 58
    NULL,                                               // 59
    NULL,                                               // 60
    NULL,                                               // 61
    NULL,                                               // 62
    NULL,                                               // 63
    NULL,                                               // 64
    NULL,                                               // 65
    NULL,                                               // 66
    NULL,                                               // 67
    NULL,                                               // 68
    NULL,                                               // 69
    NULL,                                               // 70
    NULL,                                               // 71
    NULL,                                               // 72
    NULL,                                               // 73
    NULL,                                               // 74
    NULL,                                               // 75
    NULL,                                               // 76
    NULL,                                               // 77
    NULL,                                               // 78
    NULL,                                               // 79
    NULL,                                               // 80
    NULL,                                               // 81
    NULL,                                               // 83
    NULL,                                               // 84
    NULL,                                               // 85
    NULL,                                               // 86
    NULL,                                               // 87
    NULL,                                               // 88
    NULL,                                               // 89
    NULL,                                               // 90
    NULL,                                               // 91
    NULL,                                               // 92
    NULL,                                               // 93
};

int __board_analog_read(uint8_t pin) {
    if (pin >= NUM_GPIO) return 0;
    if (_analog_in[pin] == NULL) {
        return 0;
    }
    FILE *f = fopen(_analog_in[pin], "r");
    if (f == NULL) {
        return 0;
    }
    char temp[40];
    fgets(temp, 40, f);
    fclose(f);
    return atoi(temp);
}

void initVariant() {
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir("/sys/devices")) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            if (strncmp(ent->d_name, "bone_capemgr.", 11) == 0) {
                char temp[512];
                snprintf(temp, 512, "/sys/devices/%s/slots", ent->d_name);
                FILE *f = fopen(temp, "w");
                if (f) {
                    fprintf(f, "cape-bine-iio\n");
                    fclose(f);
                }
            }
        }
        closedir(dir);
    }
}
