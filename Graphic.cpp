//#include <GLFW/glfw3.h>
//#include <iostream>
//#include <windows.h>
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	/* Initialize the library */
//	if (!glfwInit())
//		return -1;
//
//	/* Create a windowed mode window and its OpenGL context */
//	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	/* Make the window's context current */
//	glfwMakeContextCurrent(window);
//
//	GLfloat line[] = {
//		300,100,0,
//		100,300,0
//	};
//
//	/* Loop until the user closes the window */
//	while (!glfwWindowShouldClose(window))
//	{
//		glClearColor(0, 0, 255, 50);//blue
//		/* Render here */
//		glClear(GL_COLOR_BUFFER_BIT);
//
//		glPushMatrix();
//
//		glBegin(GL_TRIANGLES);
//		glColor3f(138, 43, 226);	glVertex2f(0, 0);
//		glColor3f(138, 43, 226);	glVertex2f(1, 0);
//		glColor3f(138, 43, 226);	glVertex2f(1,1);
//		glEnd();
//
//		glPopMatrix();
//		/* Swap front and back buffers */
//		glfwSwapBuffers(window);
//
//	}
//
//	glfwTerminate();
//	return 0;
//}