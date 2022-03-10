#include "main.h"

int ProtectedMain(int argc, char* argv[]) {
  std::ifstream instructions_file{argv[1]};
  std::ifstream input_file{argv[2]};
  std::ofstream output_file{argv[3]};

  daa::RamMachine machine{instructions_file, input_file, output_file};
  machine.Init();
  std::cout << "Machine Finished!" << std::endl;

  return EXIT_SUCCESS;
}

int main(int argc, char* argv[]) {
  try {
    return ProtectedMain(argc, argv);
  } catch (const daa::TagNotDefinedException& error) {
    std::cerr << argv[0] << ": " << error.what() << "\n";
    return 2;
  } catch (const daa::OperatorNotDefinedException& error) {
    std::cerr << argv[0] << ": " << error.what() << "\n";
    return 3;
  } catch (const daa::InstructionIncompatibleException& error) {
    std::cerr << argv[0] << ": " << error.what() << "\n";
    return 4;
  } catch (const daa::EmptyInputBufferException& error) {
    std::cerr << argv[0] << ": " << error.what() << "\n";
    return 5;
  } catch (...) {
    std::cerr << argv[0] << ": Unknown error\n";
    return 99;
  }
}
