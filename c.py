import numpy as np

data = np.loadtxt("c.dat")
    
plt.figure(figsize=(17,4))
    
plt.plot(data[:,0], data[:,1])
plt.scatter(data[:,0], data[:,1])
plt.xlabel("N_x")
plt.ylabel("N iteraciones")

plt.savefig("thefig.png")