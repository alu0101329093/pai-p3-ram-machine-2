#ifndef P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_TAG_NOT_DEFINED_EXCEPTION_OPERAND_H_
#define P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_TAG_NOT_DEFINED_EXCEPTION_OPERAND_H_

#include <exception>
#include <string>

namespace daa {

class TagNotDefinedException : public std::exception {
 public:
  TagNotDefinedException(std::string tag_name, int line);

  const char* what() const noexcept override;

 private:
  std::string text_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_TAG_NOT_DEFINED_EXCEPTION_OPERAND_H_