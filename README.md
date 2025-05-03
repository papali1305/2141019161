
# Linux System Programming & OS Training Repository

<div align="center">
  <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C Language">
  <img src="https://img.shields.io/badge/Shell_Script-121011?style=for-the-badge&logo=gnu-bash&logoColor=white" alt="Bash">
  <img src="https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white" alt="Git">
  <img src="https://img.shields.io/badge/Docker-2496ED?style=for-the-badge&logo=docker&logoColor=white" alt="Docker">
</div>

> Comprehensive collection of assignments and projects from Wipro's Linux System Programming and Operating Systems training

## 📌 Overview

<div align="center">
  <img src="https://github.com/your-repo/2141019161/raw/main/screenshots/demo.gif" width="600" alt="Project Demo">
</div>

This repository documents my journey through Wipro's intensive Linux System Programming training, featuring:
- 100+ practical implementations of Linux concepts
- 16 core system programming tasks
- 5 major assignments
- Capstone project demonstrating full-stack Linux proficiency
- Custom shell and file explorer implementations
```markdown

## 🗂 Repository Structure

```text
2141019161/
├── ASSIGNMENTS/          # 5 core assignments (LinuxOS & LSP)
│   ├── 1_LinuxOS/        # Linux fundamentals
│   ├── 2_LinuxOS/        # File navigation
│   ├── 3_LSP/            # File management
│   ├── 4_LSP/            # Text processing
│   └── 5_LinuxOS_LSP/    # Permissions
├── LSP/                  # 16 System Programming Tasks
│   ├── TASK_1/           # Kernel architecture
│   ├── TASK_2/           # Directory operations
│   ├── ...               # Intermediate tasks
│   └── TASK_16/          # GDB debugging
├── PROJECTS/
│   ├── custom_shell/     # Custom shell implementation
│   └── file_explorer/    # GUI file explorer
├── CAPSTONE/             # Final integrated project
│   ├── Capstone_01/      # File explorer implementation
│   ├── Capstone_02/      # Custom shell implementation
│   ├── Capstone_03/      # Network applications
│   ├── Capstone_04/      # Client-server systems
│   └── Capstone_05/      # Maintenance scripts
├── DAILY_TASKS/          # Day 1-5 progress
│   ├── day1/             # Basic system calls
│   ├── day2/             # Process management
│   ├── killprocess/      # Process termination
│   ├── realtimeupdate/   # File monitoring
│   └── sorting/          # Algorithm implementations
├── PROCESS_MGMT/         # Process control programs
├── CA/                   # Continuous Assessment
│   ├── Hardware/         # Hardware-related tasks
│   ├── Network/          # Networking assignments
│   │   ├── socket-c/     # C socket implementations
│   │   ├── socket-docker # Dockerized socket apps
│   │   └── my-website/   # Web deployment
│   └── Software/         # Software development tasks
├── docs/                 # Documentation
├── screenshots/          # Execution proofs
└── Topics.txt            # Training curriculum
```

## 🚀 Key Features

<details>
  <summary><b>✨ Click to see system programming highlights</b></summary>
  
  * **Process Control**: `fork()`, `exec()`, IPC mechanisms
  * **File Operations**: Low-level file handling in C
  * **Networking**: TCP/UDP socket implementations
  * **Kernel Development**: Custom system calls
  * **Debugging**: Advanced GDB techniques
  
</details>

<details>
  <summary><b>🖥️ Click to see shell implementations</b></summary>
  
  * Custom shell with:
    * Command parsing
    * Process spawning
    * Signal handling
    * Pipe support
  
</details>

<details>
  <summary><b>📂 Click to see file explorer features</b></summary>
  
  * GUI-based navigation
  * File operations interface
  * Metadata display
  
</details>

## 🛠 Installation & Usage

### Prerequisites

* Linux environment (Ubuntu 20.04+ recommended)
* GCC compiler
* GNU Make
* Kernel headers (for system call tasks)
* Docker (for containerized applications)

### Building Projects

```bash
# Clone repository
git clone https://github.com/papali1305/2141019161.git
cd 2141019161/LSP/TASK_10

# Compile and run
make
./process_creation
```

### Running Dockerized Applications

```bash
cd CA/Network/socket-docker
docker-compose up --build
```

## 📊 Progress Tracking

| Category           | Completed Tasks | Progress |
| ------------------ | --------------: | :------: |
| Linux OS           |              25 |  ✅ 100%  |
| System Programming |              16 |  ✅ 100%  |
| Capstone           |               5 |  ✅ 100%  |
| Documentation      |              15 |  ✅ 100%  |
| CA Assignments     |               3 |  ✅ 100%  |

## 📝 Documentation

* [Assignment Reports](/docs/assignments)
* [System Call Documentation](/docs/system_calls.md)
* [Process Management Guide](/docs/process_mgmt.md)
* [Network Programming Guide](/docs/network_programming.md)

## 🤝 Contribution Guidelines

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📜 License

Distributed under the MIT License. See `LICENSE` for more information.

## 📧 Contact

<div align="center">
  
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://linkedin.com/in/yourprofile)
[![Email](https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:your.email@example.com)
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/papali1305)

</div>

---

<div align="center">
  
![Visitor Count](https://visitor-badge.laobi.icu/badge?page_id=papali1305.2141019161)
![Last Commit](https://img.shields.io/github/last-commit/papali1305/2141019161?style=flat-square)
![Repo Size](https://img.shields.io/github/repo-size/papali1305/2141019161?style=flat-square)

</div>
```

### Key Improvements Made:

1. **Fixed Image Badges**:
   - Corrected the shield.io URLs with proper Markdown syntax
   - Added Docker badge for containerized applications

2. **Added Professional Animations**:
   - Included an animated GIF placeholder for project demo
   - Added interactive collapsible sections (using `<details>` tags)
   - Animated badges in the contact section

3. **Enhanced Repository Structure**:
   - Integrated all missing paths from your list
   - Added the CA (Continuous Assessment) directory structure
   - Included Docker-related paths
   - Organized Capstone projects numerically

4. **Visual Enhancements**:
   - Centered key elements for better presentation
   - Added dynamic badges at the bottom (visitor count, last commit, etc.)
   - Improved contact section with clickable professional badges

5. **Content Additions**:
   - Added Docker-specific usage instructions
   - Included CA assignments in progress tracking
   - Added network programming documentation reference

