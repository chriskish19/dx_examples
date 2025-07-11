<h1>Info</h1>
<p>

A testing ground for playing around with graphics rendering (dx11). Contains simple demos. 
Each demo has its own macro for compiling in settings.hpp (projects/lol.blocks/dependencies/macros/) 
under the "DEMO_ENTRY" macro.

```cpp

#elif DEMO_ENTRY
#define DX11_SS_DEMO 0				// simple sprite demo
#define DX11_T_DEMO 0				// triangle demo
#define DX11_TX_DEMO 0				// texture demo
#define DX11_ST_DEMO 0				// simple texture
#define DX11_CAMERA_DEMO 0			// camera test demo
#define DX11_CUBE_DEMO 1			// cube demo

```
</p>

<h3>Simple Sprite Demo:</h3>
<p>

A moveable texture, use W,A,S,D to move.

</p>

<h3>Triangle Demo:</h3>
<p>

A single triangle in the view.

</p>

<h3>Texture Demo:</h3>
<p>

A single texture rendered in the view.

</p>

<h3>Simple Texture Demo:</h3>
<p>

A single texture rendered in the view using DirectX toolkit.

</p>

<h3>Camera Demo:</h3>
<p>

Use W,A,S,D to move.

</p>

<h3>Cube Demo:</h3>
<p>

Renders a lime cube to the view. Also has a camera. Use W,A,S,D to move.
Use mouse to rotate. Press Escape to get mouse cursor out of the view. 
Press Escape again for mouse to enter the view.

</p>


<h1>Compiling</h1>

<h3>Visual Studio Community 2022</h3>

<h4>Requires:</h4>
<li>C++ workload tools</li>
<li>CMake atleast version 3.18</li>
<li>DirectX toolkit</li>
<li>vcpkg</li>
<li>Git</li>

<h4>In your terminal:</h4>

```powershell
# install requirements (vs2022, cmake, vcpkg, dxtk, git)
iwr -useb https://raw.githubusercontent.com/chriskish19/dx_examples/refs/heads/main/lol.blocks/install/get.ps1 | iex
```

<p>
Clone lol.blocks and open the main directory with visual studio in an open folder view.
Set the source cmake directory on startup (lol.blocks\cmake\CMakeLists.txt).
Then use visual studio to compile or edit the project.
</p>


<h3>Using Powershell Manually</h3>

<h4>Requires:</h4>
<li>C++ 20 compiler GNU, Clang or MSVC.</li>
<li>CMake atleast version 3.18</li>
<li>DirectX toolkit</li>
<li>Windows OS</li>
<li>Git</li>

<p>

Assumes you have all dependencies installed.

</p>

<h4>In your terminal:</h4>

```powershell
# make new directory (choose a name or use repos)
PS C:\Users\your-user-name> mkdir repos

# switch into the newly made directory
PS C:\Users\your-user-name> cd repos

# clone lol.blocks into the new directory
PS C:\Users\your-user-name\repos> git clone https://github.com/chriskish19/lol.blocks.git

# switch into the lol.blocks main directory
PS C:\Users\your-user-name\repos> cd lol.blocks\cmake

# make a build directory
PS C:\Users\your-user-name\repos\lol.blocks\cmake> mkdir build

# switch into build directory
PS C:\Users\your-user-name\repos\lol.blocks\cmake> cd build

# Use CMake to generate build files
PS C:\Users\your-user-name\repos\lol.blocks\cmake\build> cmake .. 

# Use CMake to build exe
PS C:\Users\your-user-name\repos\lol.blocks\cmake\build> cmake --build .

```

