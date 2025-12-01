#include "glfw_input_adapter.hpp"

#include <GLFW/glfw3.h>

GLFWInputAdapter::GLFWInputAdapter(InputState &input_state) : input_state(input_state) {

    // NOTE: keys that require a modifier to be pressed to function correct (eg, dollar sign) aren't recognized by
    // glfw, instead it only cares about the canonical character/function associated with a key on the keyboard,
    // thus that's why you don't see those things here.

    glfw_code_to_key_enum.emplace(GLFW_KEY_A, EKey::a);
    glfw_code_to_key_enum.emplace(GLFW_KEY_B, EKey::b);
    glfw_code_to_key_enum.emplace(GLFW_KEY_C, EKey::c);
    glfw_code_to_key_enum.emplace(GLFW_KEY_D, EKey::d);
    glfw_code_to_key_enum.emplace(GLFW_KEY_E, EKey::e);
    glfw_code_to_key_enum.emplace(GLFW_KEY_F, EKey::f);
    glfw_code_to_key_enum.emplace(GLFW_KEY_G, EKey::g);
    glfw_code_to_key_enum.emplace(GLFW_KEY_H, EKey::h);
    glfw_code_to_key_enum.emplace(GLFW_KEY_I, EKey::i);
    glfw_code_to_key_enum.emplace(GLFW_KEY_J, EKey::j);
    glfw_code_to_key_enum.emplace(GLFW_KEY_K, EKey::k);
    glfw_code_to_key_enum.emplace(GLFW_KEY_L, EKey::l);
    glfw_code_to_key_enum.emplace(GLFW_KEY_M, EKey::m);
    glfw_code_to_key_enum.emplace(GLFW_KEY_N, EKey::n);
    glfw_code_to_key_enum.emplace(GLFW_KEY_O, EKey::o);
    glfw_code_to_key_enum.emplace(GLFW_KEY_P, EKey::p);
    glfw_code_to_key_enum.emplace(GLFW_KEY_Q, EKey::q);
    glfw_code_to_key_enum.emplace(GLFW_KEY_R, EKey::r);
    glfw_code_to_key_enum.emplace(GLFW_KEY_S, EKey::s);
    glfw_code_to_key_enum.emplace(GLFW_KEY_T, EKey::t);
    glfw_code_to_key_enum.emplace(GLFW_KEY_U, EKey::u);
    glfw_code_to_key_enum.emplace(GLFW_KEY_V, EKey::v);
    glfw_code_to_key_enum.emplace(GLFW_KEY_W, EKey::w);
    glfw_code_to_key_enum.emplace(GLFW_KEY_X, EKey::x);
    glfw_code_to_key_enum.emplace(GLFW_KEY_Y, EKey::y);
    glfw_code_to_key_enum.emplace(GLFW_KEY_Z, EKey::z);

    glfw_code_to_key_enum.emplace(GLFW_KEY_SPACE, EKey::SPACE);
    glfw_code_to_key_enum.emplace(GLFW_KEY_GRAVE_ACCENT, EKey::GRAVE_ACCENT);

    glfw_code_to_key_enum.emplace(GLFW_KEY_1, EKey::ONE);
    glfw_code_to_key_enum.emplace(GLFW_KEY_2, EKey::TWO);
    glfw_code_to_key_enum.emplace(GLFW_KEY_3, EKey::THREE);
    glfw_code_to_key_enum.emplace(GLFW_KEY_4, EKey::FOUR);
    glfw_code_to_key_enum.emplace(GLFW_KEY_5, EKey::FIVE);
    glfw_code_to_key_enum.emplace(GLFW_KEY_6, EKey::SIX);
    glfw_code_to_key_enum.emplace(GLFW_KEY_7, EKey::SEVEN);
    glfw_code_to_key_enum.emplace(GLFW_KEY_8, EKey::EIGHT);
    glfw_code_to_key_enum.emplace(GLFW_KEY_9, EKey::NINE);
    glfw_code_to_key_enum.emplace(GLFW_KEY_0, EKey::ZERO);
    glfw_code_to_key_enum.emplace(GLFW_KEY_MINUS, EKey::MINUS);
    glfw_code_to_key_enum.emplace(GLFW_KEY_EQUAL, EKey::EQUAL);

    glfw_code_to_key_enum.emplace(GLFW_KEY_LEFT_BRACKET, EKey::LEFT_SQUARE_BRACKET);
    glfw_code_to_key_enum.emplace(GLFW_KEY_RIGHT_BRACKET, EKey::RIGHT_SQUARE_BRACKET);

    glfw_code_to_key_enum.emplace(GLFW_KEY_COMMA, EKey::COMMA);
    glfw_code_to_key_enum.emplace(GLFW_KEY_PERIOD, EKey::PERIOD);

    glfw_code_to_key_enum.emplace(GLFW_KEY_CAPS_LOCK, EKey::CAPS_LOCK);
    glfw_code_to_key_enum.emplace(GLFW_KEY_ESCAPE, EKey::ESCAPE);
    glfw_code_to_key_enum.emplace(GLFW_KEY_ENTER, EKey::ENTER);
    glfw_code_to_key_enum.emplace(GLFW_KEY_TAB, EKey::TAB);
    glfw_code_to_key_enum.emplace(GLFW_KEY_BACKSPACE, EKey::BACKSPACE);
    glfw_code_to_key_enum.emplace(GLFW_KEY_INSERT, EKey::INSERT);
    glfw_code_to_key_enum.emplace(GLFW_KEY_DELETE, EKey::DELETE_);

    glfw_code_to_key_enum.emplace(GLFW_KEY_RIGHT, EKey::RIGHT);
    glfw_code_to_key_enum.emplace(GLFW_KEY_LEFT, EKey::LEFT);
    glfw_code_to_key_enum.emplace(GLFW_KEY_UP, EKey::UP);
    glfw_code_to_key_enum.emplace(GLFW_KEY_DOWN, EKey::DOWN);

    glfw_code_to_key_enum.emplace(GLFW_KEY_SLASH, EKey::SLASH);

    glfw_code_to_key_enum.emplace(GLFW_KEY_BACKSLASH, EKey::BACKSLASH);

    glfw_code_to_key_enum.emplace(GLFW_KEY_SEMICOLON, EKey::SEMICOLON);

    glfw_code_to_key_enum.emplace(GLFW_KEY_APOSTROPHE, EKey::SINGLE_QUOTE);

    glfw_code_to_key_enum.emplace(GLFW_KEY_F1, EKey::FUNCTION_KEY);
    glfw_code_to_key_enum.emplace(GLFW_KEY_MENU, EKey::MENU_KEY);

    glfw_code_to_key_enum.emplace(GLFW_KEY_LEFT_SHIFT, EKey::LEFT_SHIFT);
    glfw_code_to_key_enum.emplace(GLFW_KEY_RIGHT_SHIFT, EKey::RIGHT_SHIFT);
    glfw_code_to_key_enum.emplace(GLFW_KEY_LEFT_CONTROL, EKey::LEFT_CONTROL);
    glfw_code_to_key_enum.emplace(GLFW_KEY_RIGHT_CONTROL, EKey::RIGHT_CONTROL);
    glfw_code_to_key_enum.emplace(GLFW_KEY_LEFT_ALT, EKey::LEFT_ALT);
    glfw_code_to_key_enum.emplace(GLFW_KEY_RIGHT_ALT, EKey::RIGHT_ALT);
    glfw_code_to_key_enum.emplace(GLFW_KEY_LEFT_SUPER, EKey::LEFT_SUPER);
    glfw_code_to_key_enum.emplace(GLFW_KEY_RIGHT_SUPER, EKey::RIGHT_SUPER);

    glfw_code_to_key_enum.emplace(GLFW_MOUSE_BUTTON_LEFT, EKey::LEFT_MOUSE_BUTTON);
    glfw_code_to_key_enum.emplace(GLFW_MOUSE_BUTTON_RIGHT, EKey::RIGHT_MOUSE_BUTTON);
    glfw_code_to_key_enum.emplace(GLFW_MOUSE_BUTTON_MIDDLE, EKey::MIDDLE_MOUSE_BUTTON);

    // not sure how to handle these yet.
    glfw_code_to_key_enum.emplace(999, EKey::SCROLL_UP);
}

void GLFWInputAdapter::glfw_key_callback(int key, int scancode, int action, int mods) {
    if (action == GLFW_PRESS || action == GLFW_RELEASE) {

        auto key_enum_iter = glfw_code_to_key_enum.find(key);
        if (key_enum_iter == glfw_code_to_key_enum.end()) {
            return;
        }

        Key &active_key = *(input_state.key_enum_to_object.at(key_enum_iter->second));
        bool is_pressed = (action == GLFW_PRESS);
        active_key.pressed_signal.set_signal(is_pressed);
    }
}

void GLFWInputAdapter::glfw_mouse_button_callback(int button, int action, int mods) {
    if (action == GLFW_PRESS || action == GLFW_RELEASE) {

        auto key_enum_iter = glfw_code_to_key_enum.find(button);
        if (key_enum_iter == glfw_code_to_key_enum.end()) {
            return; // Button not found, ignore
        }

        Key &active_key = *(input_state.key_enum_to_object.at(key_enum_iter->second));
        bool is_pressed = (action == GLFW_PRESS);
        active_key.pressed_signal.set_signal(is_pressed);
    }
}

void GLFWInputAdapter::glfw_cursor_pos_callback(double xpos, double ypos) {
    input_state.prev_mouse_position_x = input_state.mouse_position_x;
    input_state.prev_mouse_position_y = input_state.mouse_position_y;

    input_state.mouse_position_x = xpos;
    input_state.mouse_position_y = ypos;

    input_state.mouse_delta_x = input_state.mouse_position_x - input_state.prev_mouse_position_x;
    input_state.mouse_delta_y = input_state.mouse_position_y - input_state.prev_mouse_position_y;
}

bool InputState::is_valid_key_string(const std::string &key_str) const {
    return key_str_to_key_enum.find(key_str) != key_str_to_key_enum.end();
}
