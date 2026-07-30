<h2><a href="https://codeforces.com/contest/23/problem/A" target="_blank" rel="noopener noreferrer">23A — You're Given a String...</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 23A](https://codeforces.com/contest/23/problem/A) |

## Topics
`brute force` `greedy`

---

## Problem Statement

<div class="header"><div class="title">A. You're Given a String...</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>You're given a string of lower-case Latin letters. Your task is to find the length of its longest substring that can be met in the string at least twice. These occurrences can overlap (see sample test 2).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first input line contains the string. It's guaranteed, that the string is non-empty, consists of lower-case Latin letters, and its length doesn't exceed 100.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output one number — length of the longest substring that can be met in the string at least twice.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008878084755433048" id="id0011295151843101925" class="input-output-copier">Copy</div></div><pre id="id008878084755433048">abcd<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009427770240760927" id="id008372548198310262" class="input-output-copier">Copy</div></div><pre id="id009427770240760927">0</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00026894252636719185" id="id007313227179639746" class="input-output-copier">Copy</div></div><pre id="id00026894252636719185">ababa<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009497440515268369" id="id007585086254217015" class="input-output-copier">Copy</div></div><pre id="id009497440515268369">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0027532696987960237" id="id0004016659453234428" class="input-output-copier">Copy</div></div><pre id="id0027532696987960237">zzz<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007480678449349452" id="id003994954581869792" class="input-output-copier">Copy</div></div><pre id="id007480678449349452">2</pre></div></div></div>