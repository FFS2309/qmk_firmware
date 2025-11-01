#include QMK_KEYBOARD_H
#ifdef OLED_ENABLE
bool oled_task_kb(void) {
    uint8_t cur_layer = get_highest_layer(layer_state);

    oled_write("Active Layer: ", false);
    oled_write(get_u8_str(cur_layer, '0'), false);
    return oled_task_user();
}
#endif
