# Usage

To debug the codes, open `Remote-WSL` terminal and run the following command.

```
$ cd target_directory
$ g++ *.cpp
$ ./a.out
```

## CI/CD

Use two tools to debug and submit codes efficiently.

* [Tatamo/atcoder-cli: AtCoder command line tools](https://github.com/Tatamo/atcoder-cli)
* [online-judge-tools/oj: Tools for various online judges. Downloading sample cases, generating additional test cases, testing your code, and submitting it.](https://github.com/online-judge-tools/oj)

### Set up

```
$ acc config-dir # shows config dir
$ cd # cd to acc config-dir
$ mkdir cpp
$ touch cpp/main.cpp cpp/template.json
```

template.json

```template.json
{
  "task":{
    "program": ["main.cpp"],
    "submit": "main.cpp",
    "testdir": "test"
  }
}
```

### Run tests

```
$ acc new abc*
$ cd abc*
$ cd a/
$ g++ main.cpp && oj t
```

### Submit

```
$ acc submit main.cpp
```
