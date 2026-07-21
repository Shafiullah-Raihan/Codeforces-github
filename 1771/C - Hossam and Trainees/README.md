<h2><a href="https://codeforces.com/contest/1771/problem/C" target="_blank" rel="noopener noreferrer">1771C — Hossam and Trainees</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1771C](https://codeforces.com/contest/1771/problem/C) |

## Topics
`greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Hossam and Trainees</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Hossam has $$$n$$$ trainees. He assigned a number $$$a_i$$$ for the $$$i$$$-th trainee. </p><p>A pair of the $$$i$$$-th and $$$j$$$-th ($$$i \neq j$$$) trainees is called successful if there is an integer $$$x$$$ ($$$x \geq 2$$$), such that $$$x$$$ divides $$$a_i$$$, and $$$x$$$ divides $$$a_j$$$.</p><p>Hossam wants to know if there is a successful pair of trainees.</p><p>Hossam is very tired now, so he asks you for your help!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^5$$$), the number of test cases. A description of the test cases follows.</p><p>The first line of each test case contains an integer number $$$n$$$ ($$$2 \le n \le 10^5$$$).</p><p>The second line of each test case contains $$$n$$$ integers, the number of each trainee $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the answer — "<span class="tex-font-style-tt">YES</span>" (without quotes) if there is a successful pair of trainees and "<span class="tex-font-style-tt">NO</span>" otherwise. You can print each letter in any case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0041078518602375347" id="id00774711574067605" class="input-output-copier">Copy</div></div><pre id="id0041078518602375347"><div class="test-example-line test-example-line-even test-example-line-0">2</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">32 48 7</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-even test-example-line-2">14 5 9</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005116810212490164" id="id0006786685934490522" class="input-output-copier">Copy</div></div><pre id="id005116810212490164">YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the first trainee and the second trainee make up a successful pair: </p><p>$$$a_1 = 32, a_2 = 48$$$, you can choose $$$x = 4$$$.</p></div>