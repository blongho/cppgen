# Contributing to CPPGen

Thank you for your interest in contributing to CPPGen! Your contributions—whether through new features, bug fixes, or improvements—are greatly appreciated. This document outlines the process for contributing and ensures a smooth collaboration.

---

## How You Can Contribute

### 1. Report Issues
If you find a bug, have a question, or think of a new feature, [open an issue](https://github.com/your-repo/cppgen/issues). Include:
- A clear description of the issue or idea.
- Steps to reproduce (if reporting a bug).
- Suggestions or expected outcomes.

### 2. Suggest Enhancements
Have an idea to improve CPPGen? Submit an issue labeled **enhancement** or start a discussion to gather feedback.

### 3. Submit Code Contributions
Contribute directly by fixing issues or implementing new features.

---

## Getting Started with Code Contributions

### Fork and Clone the Repository
1. Fork the repository by clicking the "Fork" button on GitHub.
2. Clone your fork locally:
   ```bash
   git clone https://github.com/your-username/cppgen.git
   cd cppgen
   ```

### Set Up Your Development Environment
1. Ensure you have a **C++17+** compiler installed (e.g., GCC, Clang, or MSVC).
2. Install **CMake** (if required for testing CMake project generation).
3. Build the project to confirm everything works:
   ```bash
   mkdir build && cd build && cmake .. && make && ./cppgen --help
   ```

---

## Making Changes

### Create a New Branch
Create a feature branch for your changes:
```bash
git checkout -b feature/your-feature-name
```

### Implement Your Changes
- Write clean, readable, and well-documented code.
- Follow modern C++ practices and keep your changes focused.
- Update tests if required.

### Test Your Changes
- Ensure your changes do not break existing functionality.
- Manually test features like file generation and platform-specific behavior.

### Commit Your Changes
Write a clear commit message describing the changes:
```bash
git commit -m "Add: [feature] description of your changes"
```

---

## Submitting Your Contribution

1. Push your branch to your forked repository:
   ```bash
   git push origin feature/your-feature-name
   ```

2. Open a Pull Request:
   - Go to the original repository and click "Compare & pull request."
   - Provide a clear description of your changes and any context or testing details.

---

## Contribution Guidelines

### Code Style
- Use meaningful variable and function names.
- Keep code modular and reusable.
- Avoid unnecessary complexity and ensure readability.

### Documentation
- Update the **README.md** for any new feature.
- Comment your code to clarify complex logic.

### Testing
- Add tests for new functionality whenever possible.
- Test changes across all supported platforms (Linux, macOS, Windows).

### Collaboration
- Be open to feedback from maintainers and the community.
- Engage in discussions on GitHub for shared understanding.

---

## Community Conduct

- Be respectful and constructive in all interactions.
- Aim for inclusive and collaborative discussions.
- Respect project maintainers’ decisions and guidelines.

---

## Need Help?

If you have any questions, feel free to:
- Open an issue on GitHub.
- Email the maintainer at `blongho02@gmail.com`.

Thank you for helping improve CPPGen!
