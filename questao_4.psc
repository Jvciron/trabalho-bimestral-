algoritmo "helloworld"
  var x1,y1, x2, y2, x3, y3, dist1, dist2, dist3: real

 inicio
  escreval(" digite as coordenadas do primeiro ponto (x1, y1)")
leia (x1, y1)

 escreval(" digite as coordenadas do primeiro ponto (x2, y2)")
Leia(x2, y2)

 escreval(" digite as coordenadas do primeiro ponto (x3, y3)")
leia (x3, y3)

dist1 <- sqrt((x2 - x1)^2 + (y2 - y1)^2)
dist2 <- sqrt((x3 - x1)^2 + (y3 -y1)^2)
dist3 <- sqrt((x3 - x2)^2 + (y3 - y2)^2)

escreval(" a distância entre os pontos (x1, y1) e (x2, y2) é:", dist1)
escreval(" a distância entre os pontos (x1, y1) e (x3, y3) é:", dist2)
escreval(" a distância entre os pontos (x2, y2) e (x3, y3) é:", dist3)

fimalgoritmo 