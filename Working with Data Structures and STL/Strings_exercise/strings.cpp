/*
You're building a tool for engineers to inspect log output from a device. Here's a sample log line:
"[2025-07-14 10:15:32] ERROR: Camera stream failed to start"

You need to parse this string to extract:

    The timestamp

    The severity level (INFO, ERROR, WARN, etc.)

    The actual log message

Store the log line in a std::string.

Use .find() and .substr() to extract:

    The timestamp (between [ and ])

    The log level (between ] and :)

    The message (after the colon)

Print the extracted parts cleanly.

If the level is "ERROR", print a warning message (just prefix with !!!).
*/

#include <iostream>
#include <string>

int main() {
    std::string log = "[2025-07-14 10:15:32] ERROR: Camera stream failed to start";

    // TODO: Extract timestamp
    //fin the index of the first closing bracket
    std::size_t indexFirstClosing = log.find("]");
    std::string timeStamp = log.substr(1, indexFirstClosing - 1);
    std::cout << "Timestamp: " << timeStamp << std::endl;

    // TODO: Extract log level
    std::size_t indexColon = log.find(":", indexFirstClosing);
    std::string logLevel = log.substr(indexFirstClosing + 2, indexColon - (indexFirstClosing + 2));
    std::cout << "Log Level: " << logLevel << std::endl;

    // TODO: Extract message
    std::string message = log.substr(indexColon + 2);
    std::cout << "Message: " << message << std::endl;

    // Print all parts (timestamp, log level, message)
    // If log level is "ERROR", print a warning prefix
    if (logLevel == "ERROR") {
        std::cout << "!!! An error occurred: " << message << std::endl;
    }

    return 0;
}
