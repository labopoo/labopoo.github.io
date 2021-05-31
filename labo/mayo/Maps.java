package com.company;

import java.util.HashMap;

public class Maps {

    public static void main(String[] args) {
        
        // < (x,y)
        // < (1,4), (3,4), (6,4) >
        // < (a,3), (f,7), (l,2) >

        HashMap<String,String> diccionario = new HashMap<>();

        diccionario.put("ala","Cada uno de los órganos o apéndices pares que utilizan algunos animales para volar.");
        diccionario.put("barra","Pieza de metal u otra materia, de forma generalmente prismática o cilíndrica y mucho más larga que gruesa");

        for ( String key : diccionario.keySet() ){
            String valor = diccionario.get(key);
            System.out.println(valor);
        }

        HashMap<String,Integer> palabraConNumero = new HashMap<>();
        palabraConNumero.put("uno",1);
        palabraConNumero.put("dos",2);
        palabraConNumero.put("tres",3);
        palabraConNumero.put("cuatro",4);

        palabraConNumero.values();

        palabraConNumero.containsValue(3);

        palabraConNumero.containsKey("tres");

        palabraConNumero.remove("tres");

        palabraConNumero.clear();

        palabraConNumero.isEmpty();

        palabraConNumero.size();

        HashMap<String,Float> preciosDeProductos = new HashMap<>();
        preciosDeProductos.put("fideos",56.45f);
        preciosDeProductos.put("puré de tomates",30.55f);
        preciosDeProductos.put("yogur",30.55f);
        
        for ( String nombreClave : preciosDeProductos.keySet() ){
            Float valor = preciosDeProductos.get(nombreClave);
            System.out.println(valor);
        }

        System.out.println(preciosDeProductos);
        //{puré de tomates=30.55, yogur=30.55, fideos=56.45}

        /*
        Documentación oficial:
        https://docs.oracle.com/javase/8/docs/api/java/util/HashMap.html
        */
    }
}
