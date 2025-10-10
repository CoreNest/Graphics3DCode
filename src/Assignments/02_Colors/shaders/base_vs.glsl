#version 410

layout(location=0)in vec4 a_vertex_position;
layout(location=1)in vec3 aColor;// r, g, b

out vec3 vertexColor;

void main(){
    gl_Position=a_vertex_position;
    vertexColor=aColor;
}
