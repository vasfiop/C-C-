#version 430
in vec4 varyingcolor;
out vec4 color;
uniform mat4 proj_matrix;
void main() {
    color = varyingcolor;
}