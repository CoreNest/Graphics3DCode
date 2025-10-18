#version 410

layout(location=0)out vec4 vFragColor;
in vec3 vertexColor;

uniform float iTime;

void main(){
    
    vFragColor=vec4(vertexColor*(sin(iTime)*.5+.5),1.);
}
