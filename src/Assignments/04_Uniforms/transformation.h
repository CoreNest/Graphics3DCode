#include <glm/ext/matrix_float2x2.hpp>
#include <glm/ext/scalar_constants.hpp>

struct Transformation
{
public:
    std::vector<float> get_data()
    {
        std::vector<float> data(12, 0.0f);
        // scale
        data[0] = scale.x;
        data[1] = scale.y;

        // trans
        data[2] = trans.x;
        data[3] = trans.y;

        data[4] = rot[0][0];
        data[5] = rot[0][1];
        data[8] = rot[1][0];
        data[9] = rot[1][1];

        return data;
    }

protected:
    float theta = 1.0 * glm::pi<float>() / 6.0f; // 30 degrees
    float cs = std::cos(theta);                  // overloaded function result type has to be decrared
    float ss = std::sin(theta);
    glm::mat2 rot{cs, ss, -ss, cs};
    glm::vec2 trans{0.0, -0.25};
    glm::vec2 scale{0.5, 0.5};
} trans;
