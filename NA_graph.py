import numpy as np
import matplotlib.pyplot as plt

#se importan los archivos
datos = np.loadtxt("tray.txt")

#se separan
x = datos[:,0]
v = datos[:,1]
t = datos[:,2]

#primera grafica
plt.figure()
plt.scatter(t,x)
plt.title("x vs t posicion")
plt.xlabel("t")
plt.ylabel("x")
plt.savefig("pos.png")
plt.close()

#segunda grafica
plt.figure()
plt.scatter(t,v)
plt.title("v vs t velocity")
plt.xlabel("t")
plt.ylabel("v")
plt.savefig("vel.png")
plt.close()
#tercera grafica
plt.figure()
plt.scatter(x,v)
plt.title("v vs x the phase")
plt.xlabel("x")
plt.ylabel("y")
plt.savefig("phase.png")
plt.close()

