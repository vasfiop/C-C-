#version 430
in vec4 vartingColor;
out vec4 color;
uniform mat4 mv_matrix;
uniform mat4 proj_matrix;
void main() {
    color = vartingColor;
}