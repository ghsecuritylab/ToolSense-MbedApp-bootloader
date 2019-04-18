#include "mbed.h"

#define SD_MOUNT_PATH           "sd"
#define FULL_UPDATE_FILE_PATH   "/" SD_MOUNT_PATH "/" MBED_CONF_APP_UPDATE_FILE

#if !defined(POST_APPLICATION_ADDR)
#error "target.restrict_size must be set for your target in mbed_app.json"
#endif

int main()
{
    mbed_start_application(POST_APPLICATION_ADDR);
}