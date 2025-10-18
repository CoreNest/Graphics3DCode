#version 420

layout(location=0)out vec4 vFragColor;
in vec3 vertexColor;

uniform float iTime;
layout(std140,binding=0)uniform Mixer{
    float strength;
    vec3 mix_color;
};

void main(){
    
    vec3 mixed_color=mix(vertexColor,mix_color,strength);
    vFragColor=vec4(mixed_color,1.);// Preserve alpha
}
