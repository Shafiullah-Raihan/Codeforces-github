<h2><a href="https://codeforces.com/contest/125/problem/A" target="_blank" rel="noopener noreferrer">125A — Measuring Lengths in Baden</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 125A](https://codeforces.com/contest/125/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Measuring Lengths in Baden</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Lengths are measures in Baden in inches and feet. To a length from centimeters it is enough to know that an inch equals three centimeters in Baden and one foot contains 12 inches.</p><p>You are given a length equal to <span class="tex-span"><i>n</i></span> centimeters. Your task is to convert it to feet and inches so that the number of feet was maximum. The result should be an integer rounded to the closest value containing an integral number of inches.</p><p>Note that when you round up, 1 cm rounds up to 0 inches and 2 cm round up to 1 inch.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains an integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 10000</span>).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two non-negative space-separated integers <span class="tex-span"><i>a</i></span> and <span class="tex-span"><i>b</i></span>, where <span class="tex-span"><i>a</i></span> is the numbers of feet and <span class="tex-span"><i>b</i></span> is the number of inches.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007469940310173222" id="id0045264990831568885" class="input-output-copier">Copy</div></div><pre id="id007469940310173222">42<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00694839595652389" id="id008490852340728391" class="input-output-copier">Copy</div></div><pre id="id00694839595652389">1 2<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0011564885446149165" id="id0007872814751448887" class="input-output-copier">Copy</div></div><pre id="id0011564885446149165">5<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0036886891405273625" id="id007333005894110598" class="input-output-copier">Copy</div></div><pre id="id0036886891405273625">0 2<br></pre></div></div></div>