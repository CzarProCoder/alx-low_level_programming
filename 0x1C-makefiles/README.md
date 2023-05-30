<h1>0x1C. C - Makefiles</h1>
<div>
    <div>C</div>
</div>
<div>
    <ul>
        <li>&nbsp;By:&nbsp;Julien Barbier</li>
        <li>&nbsp;Weight:&nbsp;1</li>
        <li>&nbsp;Ongoing second chance project - started&nbsp;<span title="">May 24, 2023 6:00 AM</span>, must end by&nbsp;<span title="">Jun 2, 2023 6:00 AM</span></li>
        <li>&nbsp;An auto review will be launched at the deadline</li>
    </ul>
</div>
<div>
    <h4>In a nutshell&hellip;</h4>
    <ul>
        <li><strong>Auto QA review:</strong> 0.0/52 mandatory &amp; 0.0/13 optional</li>
        <li><strong>Altogether:</strong>&nbsp; <strong>0.0%</strong>
            <ul>
                <li>Mandatory: 0.0%</li>
                <li>Optional: 0.0%</li>
                <li>Calculation: &nbsp;0.0% + (0.0% * 0.0%) &nbsp;== <strong>0.0%</strong></li>
            </ul>
        </li>
    </ul>
</div>
<div>
    <div>
        <p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif" alt=""></p>
        <p><br></p>
        <h2>Resources</h2>
        <p><strong>Read or watch</strong>:</p>
        <ul>
            <li><a href="https://intranet.alxswe.com/rltoken/moIpBFMN3sJcVMNn5VIFlA" title="Makefile" target="_blank">Makefile</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/1AUviCUw3TrznESzWbrKAQ" title="Installing the make utility" target="_blank">Installing the make utility</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/vQFeXLq1izNua2z2dVl5Yg" title="make-official documentation" target="_blank">make-official documentation</a></li>
        </ul>
        <h2>Learning Objectives</h2>
        <p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.alxswe.com/rltoken/u_RzOFqA4lSt5AdGRAfQ_w" title="explain to anyone" target="_blank">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
        <h3>General</h3>
        <ul>
            <li>What are&nbsp;<code>make</code>, Makefiles</li>
            <li>When, why and how to use Makefiles</li>
            <li>What are rules and how to set and use them</li>
            <li>What are explicit and implicit rules</li>
            <li>What are the most common / useful rules</li>
            <li>What are variables and how to set and use them</li>
        </ul>
        <h3>Copyright - Plagiarism</h3>
        <ul>
            <li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
            <li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work.</li>
            <li>You are not allowed to publish any content of this project.</li>
            <li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
        </ul>
        <h2>Requirements</h2>
        <h3>General</h3>
        <ul>
            <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
            <li>OS: Ubuntu 20.04 LTS</li>
            <li>Version of&nbsp;<code>gcc</code>: 9.3.0</li>
            <li>Version of&nbsp;<code>make</code>: GNU Make 4.2.1</li>
            <li>All your files should end with a new line</li>
            <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
        </ul>
        <h2>More Info</h2>
        <h3>Files</h3>
        <p>In the following tasks, we are going to use&nbsp;<a href="https://github.com/holbertonschool/0x1B.c" title="these files" target="_blank">these files</a>. We want to compile these only.</p>
    </div>
</div>
<h2>Tasks</h2>
<div>
    <div>
        <div>
            <h3>0. make -f 0-Makefile</h3>
            <div>mandatory</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Create your first Makefile.</p>
            <p>Requirements:</p>
            <ul>
                <li>name of the executable:&nbsp;<code>school</code></li>
                <li>rules:&nbsp;<code>all</code>
                    <ul>
                        <li>The&nbsp;<code>all</code> rule builds your executable</li>
                    </ul>
                </li>
                <li>variables: none</li>
            </ul>
            <pre><code>julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ ./school 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
&quot;!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Makefiles$ 
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                    <li>Directory:&nbsp;<code>0x1C-makefiles</code></li>
                    <li>File:&nbsp;<code>0-Makefile</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>Get a sandbox</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>1. make -f 1-Makefile</h3>
            <div>mandatory</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Requirements:</p>
            <ul>
                <li>name of the executable:&nbsp;<code>school</code></li>
                <li>rules:&nbsp;<code>all</code>
                    <ul>
                        <li>The&nbsp;<code>all</code> rule builds your executable</li>
                    </ul>
                </li>
                <li>variables:&nbsp;<code>CC</code>,&nbsp;<code>SRC</code>
                    <ul>
                        <li><code>CC</code>: the compiler to be used</li>
                        <li><code>SRC</code>: the&nbsp;<code>.c</code> files</li>
                    </ul>
                </li>
            </ul>
            <pre><code>julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                    <li>Directory:&nbsp;<code>0x1C-makefiles</code></li>
                    <li>File:&nbsp;<code>1-Makefile</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>Get a sandbox</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>2. make -f 2-Makefile</h3>
            <div>mandatory</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Create your first useful Makefile.</p>
            <p>Requirements:</p>
            <ul>
                <li>name of the executable:&nbsp;<code>school</code></li>
                <li>rules:&nbsp;<code>all</code>
                    <ul>
                        <li>The&nbsp;<code>all</code> rule builds your executable</li>
                    </ul>
                </li>
                <li>variables:&nbsp;<code>CC</code>,&nbsp;<code>SRC</code>,&nbsp;<code>OBJ</code>,&nbsp;<code>NAME</code>
                    <ul>
                        <li><code>CC</code>: the compiler to be used</li>
                        <li><code>SRC</code>: the&nbsp;<code>.c</code> files</li>
                        <li><code>OBJ</code>: the&nbsp;<code>.o</code> files</li>
                        <li><code>NAME</code>: the name of the executable</li>
                    </ul>
                </li>
                <li>The&nbsp;<code>all</code> rule should recompile only the updated source files</li>
                <li>You are not allowed to have a list of all the&nbsp;<code>.o</code> files</li>
            </ul>
            <pre><code>julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ echo &quot;/* School */&quot; &gt;&gt; main.c
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                    <li>Directory:&nbsp;<code>0x1C-makefiles</code></li>
                    <li>File:&nbsp;<code>2-Makefile</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>Get a sandbox</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>3. make -f 3-Makefile</h3>
            <div>mandatory</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Requirements:</p>
            <ul>
                <li>name of the executable:&nbsp;<code>school</code></li>
                <li>rules:&nbsp;<code>all</code>,&nbsp;<code>clean</code>,&nbsp;<code>oclean</code>,&nbsp;<code>fclean</code>,&nbsp;<code>re</code>
                    <ul>
                        <li><code>all</code>: builds your executable</li>
                        <li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
                        <li><code>oclean</code>: deletes the object files</li>
                        <li><code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files</li>
                        <li><code>re</code>: forces recompilation of all source files</li>
                    </ul>
                </li>
                <li>variables:&nbsp;<code>CC</code>,&nbsp;<code>SRC</code>,&nbsp;<code>OBJ</code>,&nbsp;<code>NAME</code>,&nbsp;<code>RM</code>
                    <ul>
                        <li><code>CC</code>: the compiler to be used</li>
                        <li><code>SRC</code>: the&nbsp;<code>.c</code> files</li>
                        <li><code>OBJ</code>: the&nbsp;<code>.o</code> files</li>
                        <li><code>NAME</code>: the name of the executable</li>
                        <li><code>RM</code>: the program to delete files</li>
                    </ul>
                </li>
                <li>The&nbsp;<code>all</code> rule should recompile only the updated source files</li>
                <li>The&nbsp;<code>clean</code>,&nbsp;<code>oclean</code>,&nbsp;<code>fclean</code>,&nbsp;<code>re</code> rules should never fail</li>
                <li>You are not allowed to have a list of all the&nbsp;<code>.o</code> files</li>
            </ul>
            <pre><code>julien@ubuntu:~//0x1C. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school.c
main.c
main.c~
m.h
julien@ubuntu:~/0x1C. Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school
school.c
school.o
main.c
main.c~
main.o
m.h
julien@ubuntu:~/0x1C. Makefiles$ make clean -f 3-Makefile 
rm -f *~ school
julien@ubuntu:~/0x1C. Makefiles$ make oclean -f 3-Makefile 
rm -f main.o school.o
julien@ubuntu:~/0x1C. Makefiles$ make fclean -f 3-Makefile 
rm -f *~ school
rm -f main.o school.o
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make re -f 3-Makefile
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                    <li>Directory:&nbsp;<code>0x1C-makefiles</code></li>
                    <li>File:&nbsp;<code>3-Makefile</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>Get a sandbox</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>4. A complete Makefile</h3>
            <div>mandatory</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Requirements:</p>
            <ul>
                <li>name of the executable:&nbsp;<code>school</code></li>
                <li>rules:&nbsp;<code>all</code>,&nbsp;<code>clean</code>,&nbsp;<code>fclean</code>,&nbsp;<code>oclean</code>,&nbsp;<code>re</code>
                    <ul>
                        <li><code>all</code>: builds your executable</li>
                        <li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
                        <li><code>oclean</code>: deletes the object files</li>
                        <li><code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files</li>
                        <li><code>re</code>: forces recompilation of all source files</li>
                    </ul>
                </li>
                <li>variables:&nbsp;<code>CC</code>,&nbsp;<code>SRC</code>,&nbsp;<code>OBJ</code>,&nbsp;<code>NAME</code>,&nbsp;<code>RM</code>,&nbsp;<code>CFLAGS</code>
                    <ul>
                        <li><code>CC</code>: the compiler to be used</li>
                        <li><code>SRC</code>: the&nbsp;<code>.c</code> files</li>
                        <li><code>OBJ</code>: the&nbsp;<code>.o</code> files</li>
                        <li><code>NAME</code>: the name of the executable</li>
                        <li><code>RM</code>: the program to delete files</li>
                        <li><code>CFLAGS</code>: your favorite compiler flags:&nbsp;<code>-Wall -Werror -Wextra -pedantic</code></li>
                    </ul>
                </li>
                <li>The&nbsp;<code>all</code> rule should recompile only the updated source files</li>
                <li>
                    <p>The&nbsp;<code>clean</code>,&nbsp;<code>oclean</code>,&nbsp;<code>fclean</code>,&nbsp;<code>re</code> rules should never fail</p>
                </li>
                <li>
                    <p>You are not allowed to have a list of all the&nbsp;<code>.o</code> files</p>
                </li>
            </ul>
            <pre><code>julien@ubuntu:~/0x1C. Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                    <li>Directory:&nbsp;<code>0x1C-makefiles</code></li>
                    <li>File:&nbsp;<code>4-Makefile</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>Get a sandbox</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>5. Island Perimeter</h3>
            <div>mandatory</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p><strong>Technical interview preparation</strong>:</p>
            <ul>
                <li>You are not allowed to google anything</li>
                <li>Whiteboard first</li>
            </ul>
            <p>Create a function&nbsp;<code>def island_perimeter(grid):</code> that returns the perimeter of the island described in&nbsp;<code>grid</code>:</p>
            <ul>
                <li><code>grid</code> is a list of list of integers:<ul>
                        <li>0 represents a water zone</li>
                        <li>1 represents a land zone</li>
                        <li>One cell is a square with side length 1</li>
                        <li>Grid cells are connected horizontally/vertically (not diagonally).</li>
                        <li>Grid is rectangular, width and height don&rsquo;t exceed 100</li>
                    </ul>
                </li>
                <li>Grid is completely surrounded by water, and there is one island (or nothing).</li>
                <li>The island doesn&rsquo;t have &ldquo;lakes&rdquo; (water inside that isn&rsquo;t connected to the water around the island).</li>
            </ul>
            <p>Requirements:</p>
            <ul>
                <li>First line contains&nbsp;<code>#!/usr/bin/python3</code></li>
                <li>You are not allowed to import any module</li>
                <li>Module and function must be documented</li>
            </ul>
            <pre><code>guillaume@ubuntu:~/0x1C$ cat 5-main.py
#!/usr/bin/python3
&quot;&quot;&quot;
5-main
&quot;&quot;&quot;
island_perimeter = __import__(&apos;5-island_perimeter&apos;).island_perimeter

if **name** == &quot;**main**&quot;:
grid = [
[0, 0, 0, 0, 0, 0],
[0, 1, 0, 0, 0, 0],
[0, 1, 0, 0, 0, 0],
[0, 1, 1, 1, 0, 0],
[0, 0, 0, 0, 0, 0]
]
print(island_perimeter(grid))

guillaume@ubuntu:~/0x1C$
guillaume@ubuntu:~/0x1C$ ./5-main.py
12
guillaume@ubuntu:~/0x1C$
</code></pre>

</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
<li>Directory:&nbsp;<code>0x1C-makefiles</code></li>
<li>File:&nbsp;<code>5-island_perimeter.py</code></li>
</ul>
</div>
</div>
<div>
<div>
<div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>Get a sandbox</button> <button>QA Review</button></div>
<div><br></div>
</div>
</div>
</div>

</div>
<div>
    <div>
        <div>
            <h3>6. make -f 100-Makefile</h3>
            <div>#advanced</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Requirements:</p>
            <ul>
                <li>name of the executable:&nbsp;<code>school</code></li>
                <li>rules:&nbsp;<code>all</code>,&nbsp;<code>clean</code>,&nbsp;<code>fclean</code>,&nbsp;<code>oclean</code>,&nbsp;<code>re</code>
                    <ul>
                        <li><code>all</code>: builds your executable</li>
                        <li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
                        <li><code>oclean</code>: deletes the object files</li>
                        <li><code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files</li>
                        <li><code>re</code>: forces recompilation of all source files</li>
                    </ul>
                </li>
                <li>variables:&nbsp;<code>CC</code>,&nbsp;<code>SRC</code>,&nbsp;<code>OBJ</code>,&nbsp;<code>NAME</code>,&nbsp;<code>RM</code>,&nbsp;<code>CFLAGS</code>
                    <ul>
                        <li><code>CC</code>: the compiler to be used</li>
                        <li><code>SRC</code>: the&nbsp;<code>.c</code> files</li>
                        <li><code>OBJ</code>: the&nbsp;<code>.o</code> files</li>
                        <li><code>NAME</code>: the name of the executable</li>
                        <li><code>RM</code>: the program to delete files</li>
                        <li><code>CFLAGS</code>: your favorite compiler flags:&nbsp;<code>-Wall -Werror -Wextra -pedantic</code></li>
                    </ul>
                </li>
                <li>The&nbsp;<code>all</code> rule should recompile only the updated source files</li>
                <li>The&nbsp;<code>clean</code>,&nbsp;<code>oclean</code>,&nbsp;<code>fclean</code>,&nbsp;<code>re</code> rules should never fail</li>
                <li>You are not allowed to have a list of all the&nbsp;<code>.o</code> files</li>
                <li>You have to use&nbsp;<code>$(RM)</code> for the cleaning up rules, but you are not allowed to set the&nbsp;<code>RM</code> variable</li>
                <li>You are not allowed to use the string&nbsp;<code>$(CC)</code> more than once in your Makefile</li>
                <li>You are only allowed to use the string&nbsp;<code>$(RM)</code> twice in your Makefile</li>
                <li>You are not allowed to use the string&nbsp;<code>$(CFLAGS)</code> (but the compiler should still use the flags you set in this variable)</li>
                <li>You are not allowed to have an&nbsp;<code>$(OBJ)</code> rule</li>
                <li>You are not allowed to use the&nbsp;<code>%.o: %.c</code> rule</li>
                <li>Your Makefile should work even if there is a file in the folder that has the same name as one of your rule</li>
                <li>Your Makefile should not compile if the header file&nbsp;<code>m.h</code> is missing</li>
            </ul>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                    <li>Directory:&nbsp;<code>0x1C-makefiles</code></li>
                    <li>File:&nbsp;<code>100-Makefile</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>Get a sandbox</button>&nbsp;</div>
            </div>
        </div>
    </div>
</div>
