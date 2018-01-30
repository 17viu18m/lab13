"Copyright 2018 NO COPYRIGHTS>"
#include <cstdlib>
#include <print.hpp>
$log_path = log_path

int main(int argc, char** argv) {
        std::string text;
std::string $log_path = std::getenv("LOG_PATH");
        std::ofstream out(log_path, std::ios_base::app);
        while (std::cin >> text) {
                print(text, out);
                out << std::endl;
        }
}
