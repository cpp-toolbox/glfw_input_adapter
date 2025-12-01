#ifndef GLFW_INPUT_ADAPTER_HPP
#define GLFW_INPUT_ADAPTER_HPP

// adding this line fixed the compliation error about
// /home/ccn/.conan2/p/b/glad37084c3a036d2/p/include/glad/glad.h:27:2: error: #error OpenGL header already included,
// remove this include, glad already provides it 27 | #error OpenGL header already included, remove this include, glad
// already provides it
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "sbpt_generated_includes.hpp"

/**
 * @brief A class that provides just enough state to update an InputState via glfw's callbacks
 *
 * It's thought of as an adapter which "attaches" onto InputState to handle the updating of its internal data.
 *
 * @note by doing things like this we can use different input systems
 */
class GLFWInputAdapter {

    InputState &input_state;
    std::unordered_map<int, EKey> glfw_code_to_key_enum;

  public:
    GLFWInputAdapter(InputState &input_state);

    void glfw_key_callback(int key, int scancode, int action, int mods);
    void glfw_mouse_button_callback(int button, int action, int mods);
    void glfw_cursor_pos_callback(double xpos, double ypos);
};

#endif // GLFW_INPUT_ADAPTER_HPP
