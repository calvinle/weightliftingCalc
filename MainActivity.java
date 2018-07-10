package com.phoenixflow.plcalc;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void test(View view){
        EditText inputWeight = (EditText) findViewById(R.id.weight);
        double wt = Double.parseDouble(inputWeight.getText().toString());
        System.out.println(wt);
        //TODO: Differentiate output integers from adjacent Text
    }
}
