#include <pybind11/embed.h>

int main() {
    namespace py = pybind11;

    py::scoped_interpreter guard{};

    py::print("Hello, World!"); // use the Python API

    py::exec(R"(
        kwargs = dict(name="World", number=42)
        message = "Hello, {name}! The answer is {number}".format(**kwargs)
        print(message)
    )"); // Executing Python code
}