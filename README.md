# Summer 24 — Semester Final Solutions
[![Repo Size](https://img.shields.io/badge/files-many-brightgreen.svg)](https://github.com/Shahriyar-Rahim/Summer_24_Semester_Final)

A tidy collection of C programs and notes for the Summer 2024 semester final. This repository contains solutions to lab/exam problems, small helpers, and sample input/output files so you can compile, run, and test each exercise quickly.

---

## Contents

This repository mostly contains C source files (`*.c`) and a few Markdown/TXT notes. Examples:

- Problem sets and solutions: `1-a.md`, `1-b.c`, `2-a-i.c`, `2-a-ii.c`, `2-b.c`, `3-a.c`, `3-b.c`, `3-c.c`, ...
- Reference inputs/outputs: `in.txt`, `out.txt`
- Notes and explanations: `6-a-vi.md`, `2-c.txt`
- Temporary/run helper file: `tempCodeRunnerFile.c`

(See the repository root for the full list of files.)

---

## Quickstart — compile & run

All examples below assume you have `gcc` installed on a POSIX system (Linux / macOS / WSL). From the repository root:

- Compile a single problem file:
```bash
gcc -std=c11 -O2 filename.c -o filename
```

- Run the compiled program:
```bash
./filename
```

- Example: compile and run `1-b.c`
```bash
gcc -std=c11 -O2 1-b.c -o 1-b
./1-b
```

- Use the provided sample input/output files:
```bash
./program < in.txt > my_out.txt
diff -u out.txt my_out.txt || echo "Output differs"
```

Tip: if a program expects command-line arguments, consult the top comments of that file (many solutions include usage notes).

---

## How the files are organized

- Filenames like `X-a.c`, `X-b.c`, etc. correspond to numbered problems/parts.  
- `*.md` files contain explanations, notes, or worked-out steps.  
- `*.txt` files provide sample inputs/expected outputs for quick verification.

---

## Testing & verification

- Manual: compile and run each file using the steps above and compare outputs with expected files (if provided).
- Automated (simple script idea):
```bash
#!/usr/bin/env bash
set -e
for src in *.c; do
  out="${src%.c}"
  gcc -std=c11 -O2 "$src" -o "$out" || { echo "Build failed: $src"; continue; }
  if [[ -f "in.txt" ]]; then
    echo "Running $out with in.txt..."
    ./"$out" < in.txt > "${out}.out" || true
    echo "Output: ${out}.out"
  else
    echo "Built $out"
  fi
done
```
You can drop this script into the repo as `run_all.sh` and make it executable.

---

## Style & conventions

- Code aims for clarity and simplicity to match exam/lab conditions.
- If you add new problems, follow the existing filename pattern (e.g., `9-a.c`, `9-b.c`) and include a short comment header with usage instructions.

---

## Contributing

Feel free to:
- Add alternate solutions or optimizations.
- Add test cases (`*.txt`) showing edge cases.
- Add short explanations or algorithm notes in `.md` files.

If you want me to:
- Add a CI check that compiles all `.c` files,
- Create a simple test script in the repo (`run_all.sh`),
- Or reformat/annotate code with comments,

tell me which option you prefer and I can prepare the files/commit messages.

---

## License

This repository is personal course work by Shahriyar-Rahim. If you want a formal license, I can add an MIT/BSD/CC licence file — tell me which one to use.

---

## Contact / Author

Shahriyar-Rahim — repository owner  
GitHub: [Shahriyar-Rahim](https://github.com/Shahriyar-Rahim)

Good luck with your semester review! If you'd like, I can open a PR that adds this README.md (and optionally add the test script) so it's ready in the repo.
