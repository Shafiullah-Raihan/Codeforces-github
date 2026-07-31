<h2><a href="https://codeforces.com/contest/2035/problem/C" target="_blank" rel="noopener noreferrer">2035C — Alya and Permutation</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2035C](https://codeforces.com/contest/2035/problem/C) |

## Topics
`bitmasks` `constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Alya and Permutation</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Alya has been given a hard problem. Unfortunately, she is too busy running for student council. Please solve this problem for her.</p><p>Given an integer $$$n$$$, construct a permutation $$$p$$$ of integers $$$1, 2, \ldots, n$$$ that maximizes the value of $$$k$$$ (which is initially $$$0$$$) after the following process.</p><p>Perform $$$n$$$ operations, on the $$$i$$$-th operation ($$$i=1, 2, \dots, n$$$),</p><ul> <li> If $$$i$$$ is odd, $$$k=k\,\&\,p_i$$$, where $$$\&$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND operation</a>. </li><li> If $$$i$$$ is even, $$$k=k\,|\,p_i$$$, where $$$|$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise OR operation</a>. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\le t\le 500$$$) — the number of test cases.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$5\le n\le 2 \cdot 10^5$$$) — the length of the permutation.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the maximum value of $$$k$$$ in the first line and output the permutation $$$p_1, p_2,\ldots, p_n$$$ in the second line.</p><p>If there are multiple such permutations, output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0026804772563886425" id="id005421913989243164" class="input-output-copier">Copy</div></div><pre id="id0026804772563886425"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-even test-example-line-2">6</div><div class="test-example-line test-example-line-odd test-example-line-3">7</div><div class="test-example-line test-example-line-even test-example-line-4">8</div><div class="test-example-line test-example-line-odd test-example-line-5">9</div><div class="test-example-line test-example-line-even test-example-line-6">10</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008139458959390113" id="id003761521459374775" class="input-output-copier">Copy</div></div><pre id="id008139458959390113">5
2 1 3 4 5 
7
1 2 4 6 5 3 
7
2 4 5 1 3 6 7 
15
2 4 5 1 3 6 7 8 
9
2 4 5 6 7 1 3 8 9 
15
1 2 3 4 5 6 8 10 9 7 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case, the value of $$$k$$$ is determined as follows:</p><p>$$$k = 0$$$ initially.</p><ul><li> On the $$$1$$$st operation, $$$1$$$ is odd, so Alya sets $$$k$$$ to be $$$k\&p_1 = 0\&2 = 0$$$.</li><li> On the $$$2$$$nd operation, $$$2$$$ is even, so Alya sets $$$k$$$ to be $$$k|p_2 = 0|1 = 1$$$.</li><li> On the $$$3$$$rd operation, $$$3$$$ is odd, so Alya sets $$$k$$$ to be $$$k\&p_3 = 1\&3 = 1$$$.</li><li> On the $$$4$$$th operation, $$$4$$$ is even, so Alya sets $$$k$$$ to be $$$k|p_4 = 1|4 = 5$$$.</li><li> On the $$$5$$$th operation, $$$5$$$ is odd, so Alya sets $$$k$$$ to be $$$k\&p_5 = 5\&5 = 5$$$.</li></ul><p>The final value of $$$k$$$ is $$$5$$$. It can be shown that the final value of $$$k$$$ is at most $$$5$$$ for all permutations of length $$$5$$$. Another valid output is $$$[2, 3, 1, 4, 5]$$$.</p><p>For the second test case, the final value of $$$k$$$ is $$$7$$$. It can be shown that the final value of $$$k$$$ is at most $$$7$$$ for all permutations of length $$$6$$$. Other valid outputs include $$$[2, 4, 1, 6, 3, 5]$$$ and $$$[5, 2, 6, 1, 3, 4]$$$.</p></div>