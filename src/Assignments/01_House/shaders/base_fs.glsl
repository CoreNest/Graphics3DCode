#version 410

layout(location=0) out vec4 vFragColor;

uniform float iTime;

void main() {

    vFragColor = vec4(0.5+sin(iTime)*.5, 0.0, 0.0, 1.0);
}
